#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second 

int n, L, R;
int board[52][52];
int open[52][52][52][52];
int vis[52][52];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int cnt = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> L >> R;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }
    while(1){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                vis[i][j] = 0;
            }
        }
        int open_cnt = 0;

        //국경선 열어야하는 나라 찾기(open배열에 저장)
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                queue<pair<int,int>> q;
                if(vis[i][j] == 0){
                    vis[i][j] = 1;
                    q.push({i,j});
                    while(!q.empty()){
                        auto cur = q.front();
                        q.pop();
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                            //if(vis[nx][ny]) continue;
                            if(open[cur.X][cur.Y][nx][ny] == 1 || open[nx][ny][cur.X][cur.Y] == 1) continue;
                            if(abs(board[cur.X][cur.Y] - board[nx][ny]) < L || abs(board[cur.X][cur.Y] - board[nx][ny]) > R) continue;
                            //vis[nx][ny] = 1;
                            open_cnt++;
                            q.push({nx,ny});
                            open[cur.X][cur.Y][nx][ny] = 1;
                            open[nx][ny][cur.X][cur.Y] = 1;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                vis[i][j] = 0;
            }
        }

        //연합을 이루는 나라의 인구 계산 (연합의 인구수) / (연합을 이루고 있는 칸의 개수)
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                queue<pair<int,int>> q;
                queue<pair<int,int>> q2;
                int po = 0;
                int cn = 0;
                int opcnt = 0;
                for(int d=0; d<4; d++){
                    int kx = i + dx[d];
                    int ky = j + dy[d];
                    if(kx < 0 || kx >= n || ky < 0 || ky >= n) continue;
                    if(open[i][j][kx][ky] == 1) opcnt++;
                }
                if(opcnt >= 1 && vis[i][j] != 1){
                    vis[i][j] = 1;
                    po += board[i][j];
                    cn = 1;
                    q.push({i,j});
                    q2.push({i,j});
                    while(!q.empty()){
                        auto cur = q.front();
                        q.pop();
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                            if(vis[nx][ny] || open[cur.X][cur.Y][nx][ny] != 1) continue;
                            vis[nx][ny] = 1;
                            po += board[nx][ny];
                            cn++;
                            q.push({nx,ny});
                        }
                    }
                    for(int a=0; a<n; a++){
                        for(int b=0; b<n; b++){
                            vis[a][b] = 0;
                        }
                    }
                    vis[i][j] = 1;
                    board[i][j] = po / cn;
                    while(!q2.empty()){
                        auto cur = q2.front();
                        q2.pop();
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                            if(open[cur.X][cur.Y][nx][ny] != 1) continue;
                            open[cur.X][cur.Y][nx][ny] = 0;
                            open[nx][ny][cur.X][cur.Y] = 0;
                            if(vis[nx][ny]) continue;
                            board[nx][ny] = po / cn;
                            vis[nx][ny] = 1;
                            q2.push({nx,ny});
                        }
                    }

                }

            }
        }
        if(open_cnt) cnt++;
        else break;
    }
    cout << cnt;
    return 0;
}
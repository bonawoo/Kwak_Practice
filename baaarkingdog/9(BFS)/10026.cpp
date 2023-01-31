#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int N;
string board[101];
bool vis[101][101];
bool rvis[101][101];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> board[i];
    }

    queue<pair<int,int>> Q;
    int cnt = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if( vis[i][j] != 1){
                Q.push({i,j});
                vis[i][j] = 1;
                cnt++;
                while(!Q.empty()){
                    auto cur = Q.front();
                    Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny] || board[nx][ny] != board[cur.X][cur.Y]) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
            }
        }
    }
    
    cout << cnt << " ";
    queue<pair<int,int>> rQ;
    cnt = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(rvis[i][j] != 1){
                rQ.push({i,j});
                rvis[i][j] = 1;
                cnt++;
                while(!rQ.empty()){
                    auto cur = rQ.front();
                    rQ.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(board[cur.X][cur.Y] == 'R' || board[cur.X][cur.Y] == 'G'){
                            if(board[nx][ny] == 'B') continue;
                        }else{
                            if(board[nx][ny] != 'B') continue;
                        }
                        if(rvis[nx][ny]) continue;
                        rvis[nx][ny] = 1;
                        rQ.push({nx,ny});
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
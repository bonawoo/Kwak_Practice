#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int board[310][310];
int vis[310][310];
int N,M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> board[i][j];
        }
    }
    int cnt = 0;
    while(1){
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                vis[i][j] = -1; // not visited
            }
        }
        queue<pair<int,int>> Q;
        int bing = 0;
        for(int i=1; i<N-1; i++){
            for(int j=1; j<M-1; j++){
                if(board[i][j] != 0 && vis[i][j] == -1){
                    Q.push({i,j});
                    vis[i][j] = (board[i-1][j] == 0) + (board[i+1][j] == 0) + (board[i][j+1] == 0) + (board[i][j-1] == 0);
                    bing++;
                    if(bing > 1){ // 두 덩어리 이상 분리
                        cout << cnt;
                        return 0;
                    }
                    while(!Q.empty()){
                        auto cur = Q.front();
                        Q.pop();
                        for(int dir =0 ;dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 1 || nx >= N-1 || ny < 1 || ny >= M-1) continue;
                            if(vis[nx][ny] != -1 || board[nx][ny] == 0) continue;
                            if(vis[nx][ny] == -1 && board[nx][ny] != 0){
                                vis[nx][ny] = (board[nx-1][ny] == 0) + (board[nx+1][ny] == 0) + (board[nx][ny+1] == 0) + (board[nx][ny-1] == 0);
                            }
                            Q.push({nx,ny});

                        }
                    }
                }
            }
        }
        if(bing == 0){
            cout << 0;
            return 0;
        }
        for(int i=1; i<N-1; i++){
            for(int j=1; j<M-1; j++){
                if(vis[i][j] > 0) board[i][j] -= vis[i][j];
                if(board[i][j] < 0) board[i][j] = 0;
            }
        }
        cnt++;
    }
    cout << 0;
    return 0;
}
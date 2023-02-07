#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int N,M;
int mn = 10000;
int board[10][10];
int vis[10][10];
int isused[10][10];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void func(int cur){
    if(cur == 3){
        int tot = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                vis[i][j] = 0;
            }
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                int cnt = 0;
                if(board[i][j] == 2 && vis[i][j] == 0){
                    queue<pair<int,int>> Q;
                    Q.push({i,j});
                    vis[i][j] = 1;
                    cnt = 1;
                    while(!Q.empty()){
                        auto cur = Q.front();
                        Q.pop();
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || nx >=N || ny < 0 || ny >= M) continue;
                            if(vis[nx][ny] > 0 || board[nx][ny] != 0) continue;
                            Q.push({nx,ny});
                            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
                            cnt++;
                        }
                    }
                }
                tot += cnt;
            }
        }
        if(tot) mn = min(mn, tot);
        return;
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(!isused[i][j]){
                isused[i][j] = 1;
                board[i][j] = 1;
                func(cur+1);
                isused[i][j] = 0;
                board[i][j] = 0;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int wall_cnt = 0;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> board[i][j];
            if(board[i][j] > 0) isused[i][j] = 1;
            if(board[i][j] == 1) wall_cnt++;
        }
    }
    func(0);
    cout << N*M - mn - wall_cnt-3;
    return 0;
}
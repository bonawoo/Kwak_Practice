#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[102][102];
bool vis[102][102];
int N;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int min_num = 1000;
    int max_num = 0;
    int mx = 1;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
            min_num = min(min_num, board[i][j]);
            max_num = max(max_num, board[i][j]);
        }
    }
    int cnt = 0;
    for(int m=min_num; m<max_num; m++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                vis[i][j] = 0;
            }
        }
        queue<pair<int,int>> Q;
        cnt=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(board[i][j] > m && vis[i][j] == 0){
                    Q.push({i,j});
                    vis[i][j] = 1;
                    cnt++;
                    while(!Q.empty()){
                        auto cur = Q.front();
                        Q.pop();
                        for(int dir = 0; dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                            if(vis[nx][ny] || board[nx][ny] <= m) continue;
                            vis[nx][ny] = 1;
                            Q.push({nx,ny});
                        }
                    }
                }
            }
        }
        mx = max(cnt, mx);
    }
    cout << mx;
    return 0;
}
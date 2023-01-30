#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int board[502][502];
int vis[502][502];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int M,N;
    cin >> N >> M;
    for(int i=0; i < N; i++){
        for(int j=0; j < M; j++){
            cin >> board[i][j];
        }
    }
    int mx = 0;
    int num = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j < M; j++){
            if(vis[i][j] != 1 && board[i][j] == 1){
                vis[i][j] = 1;
                queue<pair<int,int>> Q;
                Q.push({i,j});
                int cnt = 0;
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); 
                    Q.pop();
                    if(board[cur.X][cur.Y] == 1) cnt++;
                    if(cnt > mx) mx = cnt;
                    //cout << "(" << cur.X << ", " << cur.Y << ") -> ";
                    for(int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                        if(vis[nx][ny] == 1 || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
                num++;
            }
        }
    }
    cout << num << "\n" << mx;
    return 0;
}
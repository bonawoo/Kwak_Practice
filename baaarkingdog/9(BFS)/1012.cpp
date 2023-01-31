#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int T;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T){
        int M,N,K;
        int board[51][51] = {0};
        bool vis[51][51] = {0};
        int cnt = 0;
        cin >> M >> N >> K;
        for(int i=0; i<K; i++){
            int x,y;
            cin >> x >> y;
            board[x][y] = 1;
        }

        queue<pair<int,int>> Q;
        
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(board[i][j] == 1 && vis[i][j] != 1){
                    Q.push({i,j});
                    cnt++;
                    while(!Q.empty()){
                        auto cur = Q.front();
                        Q.pop();
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                            if(vis[nx][ny] || board[nx][ny] != 1) continue;
                            vis[nx][ny] = 1;
                            Q.push({nx,ny});
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
        T--;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int T,M,N;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int fire[1001][1001];
int dist[1001][1001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for(int t=0; t<T; t++){
        cin >> N >> M;
        string board[1001];
        int escap = 0;
        queue<pair<int,int>> dQ;
        queue<pair<int,int>> fQ;
        
        for(int m=0; m<M; m++){
            cin >> board[m];
            for(int n=0; n<N; n++){
                if(board[m][n] == '@'){
                    dist[m][n] = 1;
                    fire[m][n] = 0;
                    if(m == 0 || n == 0 || m == M-1 || n == N-1){
                        escap = 2;
                    }else{
                        dQ.push({m,n});
                    }
                }else if(board[m][n] == '*'){
                    fire[m][n] = 1;
                    dist[m][n] = 0;
                    fQ.push({m,n});
                }else{
                    dist[m][n] = 0;
                    fire[m][n] = 0;
                }
            }
        }
        if(escap == 2){
            cout << 1 << "\n";
            continue;
        }
        while(!fQ.empty()){
            auto cur = fQ.front();
            fQ.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                if(fire[nx][ny] > 0 || board[nx][ny] == '#' || board[nx][ny] == '*') continue;
                fire[nx][ny] = fire[cur.X][cur.Y] + 1;
                fQ.push({nx,ny});
            }
        }
        while(!dQ.empty()){
            auto cur = dQ.front();
            dQ.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(cur.X <= 0 || cur.X >= M-1 || cur.Y <= 0 || cur.Y >= N-1){
                    cout << dist[cur.X][cur.Y] << "\n";
                    escap = 1;
                    dQ = queue<pair<int,int>>();
                    break;
                }
                if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                if(dist[nx][ny] > 0 || board[nx][ny] == '#' || board[nx][ny] == '*') continue;
                if(fire[nx][ny] != 0 && (fire[nx][ny] <= dist[cur.X][cur.Y]+1)) continue;
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                dQ.push({nx,ny});
            }
        }
        
        if(!escap) cout << "IMPOSSIBLE" << "\n";
    }
    return 0;
}
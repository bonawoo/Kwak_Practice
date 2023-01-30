#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int n,m;
char board[1002][1002];
int dist[1002][1002];
int fire[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    cin >> n >> m;
    
    queue<pair<int,int>> Q, fQ;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if(board[i][j] == 'J'){
                fire[i][j] = -1;
                dist[i][j] = 0;
                Q.push({i,j});
            }else if(board[i][j] == 'F'){
                dist[i][j] = -1;
                fire[i][j] = 0;
                fQ.push({i,j});
            }else{
                dist[i][j] = -1;
                fire[i][j] = -1;
            }
        }
    }
    
    while(!fQ.empty()){
        auto cur = fQ.front();
        fQ.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >=m) continue;
            if(fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            fQ.push({nx,ny});
        }
    }
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >=m){
                cout << dist[cur.X][cur.Y] + 1;
                return 0;
            }
            if(dist[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if(fire[nx][ny] != -1 && fire[nx][ny] <= dist[cur.X][cur.Y] +1 ) continue;
            
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
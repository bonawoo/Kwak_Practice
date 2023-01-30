#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;
int dist[1002][1002];
vector<pair<int,int>> v;
int main(){
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) v.push_back({i,j});
            dist[i][j] = -1;
        }
    }

    queue<pair<int,int>> Q;
    for(int i=0; i<v.size(); i++){
        Q.push(v[i]);
        dist[v[i].X][v[i].Y] = 0;
    }
    int mx =0;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            //cout << "(" << cur.X << ", " << cur.Y << ") -> ";
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny] > -1 || board[nx][ny] == -1) continue;
            Q.push({nx,ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            if(dist[nx][ny] > mx) mx = dist[nx][ny];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dist[i][j] == -1 && board[i][j] != -1){
                cout << -1;
                return 0;
            }
        }
    }
    cout << mx;
    return 0;
}
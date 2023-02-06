#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int N,M,K;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int board[102][102];
int vis[102][102];
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    int fx,fy,sx,sy;
    for(int k=0; k<K; k++){
        cin >> fy >> fx >> sy >> sx;
        for(int i=fx; i<sx; i++){
            for(int j=fy; j<sy; j++){
                board[i][j] = 2;
            }
        }
    }
    queue<pair<int,int>> Q;
    int cnt = 0;
    int mx = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            mx = 0;
            if(board[i][j] != 2 && vis[i][j] < 1){
                Q.push({i,j});
                vis[i][j] = 1;
                mx++;
                cnt++;
            }
            while(!Q.empty()){
                auto cur = Q.front();
                Q.pop();
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= N || ny < 0 || ny >=M) continue;
                    if(vis[nx][ny] > 0 || board[nx][ny] == 2) continue;
                    vis[nx][ny] = vis[cur.X][cur.Y]+1;
                    Q.push({nx,ny});
                    mx++;
                }
            }
            if(mx) v.push_back(mx);
        }
    }
    cout << cnt << "\n";
    sort(v.begin(), v.end());
    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[30];
bool vis[30][30];
int N;

vector<int> v;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    int cnt = 0;
    queue<pair<int,int>> Q;
    for(int i=0; i<N;i++){
        for(int j=0; j<N; j++){
            int mx = 0;
            if(board[i][j] == '1' && vis[i][j] == 0){
                Q.push({i,j});
                vis[i][j] = 1;
                mx++;
                cnt++;
                while(!Q.empty()){
                    auto cur = Q.front();
                    Q.pop();
                    for(int dir =0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny] != 0 || board[nx][ny] != '1') continue;
                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                        mx++;
                    }
                }
            }
            if(mx) v.push_back(mx);
        }
    }
    cout << cnt << "\n";
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}
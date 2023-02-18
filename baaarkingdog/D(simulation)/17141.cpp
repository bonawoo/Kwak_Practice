#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int n, m;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int zero_cnt=0;

int board[55][55];
int dist[55][55];
int mn = 0xfffffff;
vector<pair<int,int>> v;
void virus(vector<int>& vir){
    int tmp_cnt = zero_cnt;
    int mx = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dist[i][j] = -1;
        }
    }
    queue<pair<int,int>> Q;
    for(auto it : vir){
        dist[v[it].first][v[it].second] = 0;
        Q.push({v[it].first,v[it].second});
    }
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(dist[nx][ny] >= 0 || board[nx][ny] == 1) continue;
            Q.push({nx,ny});
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            mx = max(mx, dist[nx][ny]);
            tmp_cnt--;
        }
    }
    if(tmp_cnt == 0) mn = min(mn, mx);
    else return;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            if(board[i][j] == 2){
                v.push_back({i,j});
                board[i][j] = 0;
            }
            if(board[i][j] == 0) zero_cnt++;
        }
    }
    zero_cnt -= m;
    int a[(int)v.size()] = {0};
    fill(a+v.size()-m,a+v.size(),1);
    do{
        vector<int> vir;
        for(int i=0; i<v.size(); i++){
            if(a[i] == 1){
                vir.push_back(i);
            }
        }
        virus(vir);
    }while(next_permutation(a,a+v.size()));

    if(mn == 0xfffffff) cout << -1;
    else cout << mn;
    return 0;
}
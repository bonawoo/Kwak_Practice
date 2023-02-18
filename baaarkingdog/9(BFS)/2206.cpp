#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int N, M;
string board[1030];
int dist[1030][1030][2];
int mn = 1000010;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    if(N == 1 && M == 1){
        cout << 1;
        return 0;
    }
    queue<tuple<int,int,int>> Q;
    Q.push({0,0,0});
    dist[0][0][0] = 1;
    dist[0][0][1] = 1;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        if(get<0>(cur) == N-1 && get<1>(cur) == M-1){
            if(dist[N-1][M-1][get<2>(cur)]) mn = min(mn, dist[N-1][M-1][get<2>(cur)]);
        }
        for(int dir=0; dir<4; dir++){
            int cucnt = get<2>(cur);
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(dist[nx][ny][cucnt] > 0) continue;
            if(board[nx][ny] == '1'){
                if(get<2>(cur) == 0){
                    cucnt = 1;
                    dist[nx][ny][cucnt] = dist[get<0>(cur)][get<1>(cur)][cucnt-1] + 1;
                }else continue;
            }else{
                dist[nx][ny][cucnt] = dist[get<0>(cur)][get<1>(cur)][cucnt] + 1;
            }
            Q.push({nx,ny,cucnt});
        }
    }
    if(mn == 1000010) cout << -1;
    else cout << mn;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int N,M,K;

int hx[8] = {1,2,2,1,-1,-2,-2,-1};
int hy[8] = {-2,-1,1,2,2,1,-1,-2};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int board[210][210];
int vis[210][210][32];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> K >> M >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> board[i][j];
        }
    }
    queue<tuple<int,int,int>> Q;
    Q.push({0,0,0});
    vis[0][0][0] = 1;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        if(get<0>(cur) == N-1 && get<1>(cur) == M-1) continue;
        if(get<2>(cur) < K){
            for(int hd=0; hd<8; hd++){
                int nnx = get<0>(cur) + hx[hd];
                int nny = get<1>(cur) + hy[hd];
                int ncur = get<2>(cur)+1;
                if(nnx < 0 || nnx >= N || nny < 0 || nny >= M) continue;
                if(vis[nnx][nny][ncur] > 0 || board[nnx][nny] == 1) continue;
                vis[nnx][nny][ncur] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
                Q.push({nnx,nny,ncur});
            }
        }
        for(int dir=0; dir<4; dir++){
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(vis[nx][ny][get<2>(cur)] > 0 || board[nx][ny] == 1) continue;
            vis[nx][ny][get<2>(cur)] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({nx,ny,get<2>(cur)});
            
        }
    }
    int mn = 10000000;
    for(int k=0; k<=K; k++){
        if(vis[N-1][M-1][k]) mn = min(mn, vis[N-1][M-1][k]-1);
    }
    if(mn != 10000000) cout << mn;
    else cout << -1;
    return 0;
}
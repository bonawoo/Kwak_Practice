#include <bits/stdc++.h>

using namespace std;

#define X get<0>
#define Y get<1>
#define Z get<2>

char board[32][32][32];
int dist[32][32][32];
int L,R,C;

int dx[6] = {1,0,0,-1,0,0};
int dy[6] = {0,1,0,0,-1,0};
int dz[6] = {0,0,1,0,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin >> L >> R >> C;
        if(L == 0 && R == 0 && C == 0) return 0;
        queue<tuple<int,int,int>> Q;
        int exit_l, exit_r, exit_c;
        for(int i=0; i<L; i++){
            for(int r=0; r<R; r++){
                for(int c=0; c<C; c++){
                    cin >> board[r][c][i];
                    if(board[r][c][i] == 'S'){
                        Q.push({r,c,i});
                        dist[r][c][i] = 1;
                    }else dist[r][c][i] = 0;
                    if(board[r][c][i] == 'E'){
                        exit_r = r;
                        exit_c = c;
                        exit_l = i;

                    }
                }
            }
        }
        while(!Q.empty()){
            auto cur = Q.front();
            Q.pop();
            for(int dir=0; dir<6; dir++){
                int nx = get<0>(cur) + dx[dir];
                int ny = get<1>(cur) + dy[dir];
                int nz = get<2>(cur) + dz[dir];
                if(nx < 0 || nx >= R || ny < 0 || ny >= C || nz < 0 || nz >= L) continue;
                if(dist[nx][ny][nz] > 0 || board[nx][ny][nz] == '#') continue;
                dist[nx][ny][nz] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] +1;
                Q.push({nx,ny,nz});
            }
        }
        if(dist[exit_r][exit_c][exit_l] == 0) cout << "Trapped!\n";
        else cout << "Escaped in " << dist[exit_r][exit_c][exit_l] -1 << " minute(s).\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int board[4][5][5][5];
int maze[5][5][5];
int vis[5][5][5];
int dx[6] = {1,0,0,-1,0,0};
int dy[6] = {0,1,0,0,-1,0};
int dz[6] = {0,0,1,0,0,-1};
bool isused[10];

int mn = 10000000;
void change_floor(){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                for(int k=0; k<5; k++){
                    vis[j][k][i] = 0;
                }
            }
        }
        queue<tuple<int,int,int>> Q;
        if(maze[0][0][0] == 1 && maze[4][4][4] == 1){
            vis[0][0][0] = 1;
            Q.push({0,0,0});
            while(!Q.empty()){
                auto cur = Q.front();
                Q.pop();
                for(int dir=0; dir<6; dir++){
                    int nx = get<0>(cur) + dx[dir];
                    int ny = get<1>(cur) + dy[dir];
                    int nz = get<2>(cur) + dz[dir];
                    if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || nz < 0 || nz >= 5) continue;
                    if(vis[nx][ny][nz] != 0 || maze[nx][ny][nz] == 0) continue;
                    vis[nx][ny][nz] = vis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
                    Q.push({nx,ny,nz});
                    if(nx == 4 && ny == 4 && nz == 4) break;
                }
            }
            if(vis[4][4][4] > 1){
                mn = min(mn,vis[4][4][4]-1);
            }
        }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5; k++){
                cin >> board[0][j][k][i];
            }
        }
    }
    for(int r=1; r<4; r++){
        for(int idx=0; idx<5; idx++){
            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    board[r][i][j][idx] = board[r-1][j][4-i][idx];
                }
            }
        }
    }
    int order[5] = {0,1,2,3,4};
    do{
        for(int tmp=0; tmp<1024; tmp++){
            int brute = tmp;
            for(int a=0; a<5; a++){
                int rot = brute % 4;
                brute /= 4;
                for(int b=0; b<5; b++){
                    for(int c=0; c<5; c++){
                        maze[b][c][a] = board[rot][b][c][order[a]];
                    }
                }
            }
            change_floor();
        }
    }while(next_permutation(order,order+5));
    if(mn == 10000000) cout << -1;
    else cout << mn;
    return 0;
}
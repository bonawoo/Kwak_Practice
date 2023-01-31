#include <bits/stdc++.h>

using namespace std;

int M,N,H;

int dx[6] = {1,0,0,-1,0,0};
int dy[6] = {0,1,0,0,-1,0};
int dz[6] = {0,0,1,0,0,-1};

int board[101][101][101];
int dist[101][101][101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> H;
    queue<tuple<int,int,int>> Q;

    int tomato_cnt = 0;
    for(int h=0; h<H; h++){
        for(int m=0; m<M; m++){
            for(int n=0; n<N; n++){
                cin >> board[m][n][h];
                tuple<int,int,int> tmp_tp = make_tuple(m,n,h);
                //cout << "(" << m  << "," << n << "," << h << ")";
                if(board[m][n][h] == 1){
                    Q.push(tmp_tp);
                    dist[m][n][h] = 1;
                }else if(board[m][n][h] == 0){
                    dist[m][n][h] = -1;
                    tomato_cnt++;
                }else dist[m][n][h] = -1;
            }
        }
    }
    if(tomato_cnt == 0){
        cout << 0;
        return 0;
    }
    int mx = 0;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0; dir<6; dir++){
            //cout << "(" << get<0>(cur)  << "," << get<1>(cur) << "," << get<2>(cur) << ") +";
            //cout << "(" << dx[dir]  << "," << dy[dir] << "," << dz[dir] << ") ->";
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            int nz = get<2>(cur) + dz[dir];
            //cout << "(" << nx  << "," << ny << "," << nz << ")\n";
            if(nx < 0 || ny < 0 || nz < 0 || nx >= M || ny >= N || nz >= H) continue;
            if(dist[nx][ny][nz] > 0 || board[nx][ny][nz] != 0) continue;
            board[nx][ny][nz] = 1;
            dist[nx][ny][nz] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            if(dist[nx][ny][nz] > mx) mx = dist[nx][ny][nz];
            tuple<int,int,int> push_tp = make_tuple(nx, ny, nz);
            Q.push(push_tp);
        }
    }
    
    for(int h=0; h<H; h++){
        for(int m=0; m<M; m++){
            for(int n=0; n<N; n++){
                if(dist[m][n][h] == -1 && board[m][n][h] != -1){
                    cout << -1;
                    return 0;
                }
            }
        }
    }
    cout << mx-1;
    return 0;
}
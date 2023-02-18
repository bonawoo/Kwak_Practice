#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int board[105][105];
int vis[105][105][2];
int N;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int mn = 100000;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
        }
    }
    //대륙 구분하기
    int d = 1;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(vis[i][j][0] == 0 && board[i][j] == 1){
                queue<pair<int,int>> Q;
                Q.push({i,j});
                vis[i][j][0] = d;
                while(!Q.empty()){
                    auto cur = Q.front();
                    Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny][0] > 0|| board[nx][ny] == 0) continue;
                        vis[nx][ny][0] = d;
                        Q.push({nx,ny});
                    }
                }
                d++;
            }
        }
    }
    //최솟값 찾기
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
        for(int a=0; a<N; a++){
            for(int b=0; b<N; b++){
                vis[a][b][1] = 0;
            }
        }
            if(vis[i][j][1] == 0 && board[i][j] == 1){
                queue<tuple<int,int,int>> Q;
                Q.push({i,j,0});
                int fd = vis[i][j][0];
                vis[i][j][1] = 1;
                while(!Q.empty()){
                    auto cur = Q.front();
                    Q.pop();
                    if(get<2>(cur) > mn) break;
                    for(int dir=0; dir<4; dir++){
                        int nx = get<0>(cur) + dx[dir];
                        int ny = get<1>(cur) + dy[dir];
                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(vis[nx][ny][1] > 0) continue;
                        vis[nx][ny][1] = 1;
                        if(board[nx][ny] == 1){
                            if(vis[nx][ny][0] != fd){
                                //cout << nx << " , " << ny << " = " << get<2>(cur) << "\n";
                                mn = min(mn, get<2>(cur));
                            }
                            continue;
                        }
                        Q.push({nx,ny, get<2>(cur)+1});
                    }
                }
            }
        }
    }
    cout << mn;
    return 0;
}
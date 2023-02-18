#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int N,M;
int rx,ry,bx,by,ox,oy;
int mn = 100;
int fail_cnt = 0;
string tboard[15];
string board[15];
// dx[0:북, 1:동, 2:남, 3:서]
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> tboard[i];
        for(int j=0; j<M; j++){
            if(tboard[i][j] == 'R'){
                rx = i;
                ry = j;
                tboard[i][j] = '.';
            }
            if(tboard[i][j] == 'B'){
                bx = i;
                by = j;
                tboard[i][j] = '.';
            }
            if(tboard[i][j] == 'O'){
                ox = i;
                oy = j;
            }
        }
    }
    for(int dir=0; dir<4; dir++){
        int nx = rx + dx[dir];
        int ny = ry + dy[dir];
        int nbx = bx + dx[dir];
        int nby = by + dy[dir];
        if(nx < 0 || nx >= N || ny < 0 || ny >= M || nbx < 0 || nbx >= N || nby < 0 || nby >= M) continue;
        if(tboard[nx][ny] == '#' && tboard[nbx][nby] == '#') continue;
        queue<tuple<int,int,int,int,int,int>> Q;
        Q.push({rx, ry, dir,0,bx,by});
        while(!Q.empty()){
            for(int i=0; i<N; i++){
                for(int j=0; j<M; j++){
                    board[i][j] = tboard[i][j];
                }
            }
            fail_cnt = 0;
            auto cur = Q.front();
            Q.pop();
            int cx = get<0>(cur);
            int cy = get<1>(cur);
            int cd = get<2>(cur);
            int ccnt = get<3>(cur);
            int cbx = get<4>(cur);
            int cby = get<5>(cur);
            
            board[cx][cy] = 'R';
            board[cbx][cby] = 'B';
            if(ccnt > 10) break;
            int dot_x = -1;
            int dot_y = -1;
            if(cd == 0){
                for(int i=cx-1; i>=0; i--){
                    if(board[i][cy] == 'O'){
                        dot_x = 100;
                        dot_y = 100;
                        fail_cnt = 1;
                        break;
                    }
                    if(board[i][cy] == '.'){
                        dot_x = i;
                        dot_y = cy;
                    }
                    if(board[i][cy] == '#') break;
                    if(board[i][cy] == 'B'){
                        int plus_x = 0;
                        int plus_y = 0;
                        for(int b=cbx-1; b>=0; b--){
                            if(board[b][cby] == '.') plus_x++;
                            else break;
                        }
                        if(plus_x > 0){
                            dot_x = cbx-plus_x+1;
                            dot_y = cy;
                            cbx = dot_x -1;
                        }
                        break;
                    }
                }
            }else if(cd == 1){
                for(int j=cy+1; j<M; j++){
                    if(board[cx][j] == 'O'){
                        dot_x = 100;
                        dot_y = 100;
                        fail_cnt = 1;
                        break;
                    }
                    if(board[cx][j] == '.'){
                        dot_x = cx;
                        dot_y = j;
                    }
                    if(board[cx][j] == '#') break;
                    if(board[cx][j] == 'B'){
                        int plus_x = 0;
                        int plus_y = 0;
                        for(int b=cby+1; b<M; b++){
                            if(board[cbx][b] == '.') plus_y++;
                            else break;
                        }
                        if(plus_y > 0){
                            dot_x = cx;
                            dot_y = cby+plus_y-1;
                            cby = dot_y +1;
                        }
                        break;
                    }
                }

            }else if(cd == 2){
                for(int i=cx+1; i<N; i++){
                    if(board[i][cy] == 'O'){
                        dot_x = 100;
                        dot_y = 100;
                        fail_cnt = 1;
                        break;
                    }
                    if(board[i][cy] == '.'){
                        dot_x = i;
                        dot_y = cy;
                    }
                    if(board[i][cy] == '#') break;
                    if(board[i][cy] == 'B'){
                        int plus_x = 0;
                        int plus_y = 0;
                        for(int b=cbx+1; b<N; b++){
                            if(board[b][cby] == '.') plus_x++;
                            else break;
                        }
                        if(plus_x > 0){
                            dot_x = cbx+plus_x-1;
                            dot_y = cy;
                            cbx = dot_x +1;
                        }
                        break;
                    }
                }
            }else if(cd == 3){
                for(int j=cy-1; j>=0; j--){
                    if(board[cx][j] == 'O'){
                        dot_x = 100;
                        dot_y = 100;
                        fail_cnt = 1;
                        break;
                    }
                    if(board[cx][j] == '.'){
                        dot_x = cx;
                        dot_y = j;
                    }
                    if(board[cx][j] == '#') break;
                    if(board[cx][j] == 'B'){
                        int plus_x = 0;
                        int plus_y = 0;
                        for(int b=cby-1; b>=0; b--){
                            if(board[cbx][b] == '.') plus_y++;
                            else break;
                        }
                        if(plus_y > 0){
                            dot_x = cx;
                            dot_y = cby-plus_y+1;
                            cby = dot_y -1;
                        }
                        break;
                    }
                }

            }
            if(dot_x != -1 && dot_y != -1){
                board[cx][cy] = '.';
                if(fail_cnt != 1){
                    board[dot_x][dot_y] = 'R';
                    cx = dot_x;
                    cy = dot_y;
                }
            }
                //B 구슬 이동
                dot_x = cbx;
                dot_y = cby;
                if(cd == 0){
                    for(int i=cbx-1; i>=0; i--){
                        if(board[i][cby] == 'O'){
                            fail_cnt = 2;
                            break;
                        }
                        if(board[i][cby] == '.'){
                            dot_x = i;
                            dot_y = cby;
                        }
                        if(board[i][cby] == '#' || board[i][cby] == 'R' ) break;
                    }
                }else if(cd == 1){
                    for(int j=cby+1; j<M; j++){
                        if(board[cbx][j] == 'O'){
                            fail_cnt = 2;
                            break;
                        }
                        if(board[cbx][j] == '.'){
                            dot_x = cbx;
                            dot_y = j;
                        }
                        if(board[cbx][j] == '#' || board[cbx][j] == 'R' ) break;
                    }

                }else if(cd == 2){
                    for(int i=cbx+1; i<N; i++){
                        if(board[i][cby] == 'O'){
                            fail_cnt = 2;
                            break;
                        }
                        if(board[i][cby] == '.'){
                            dot_x = i;
                            dot_y = cby;
                        }
                        if(board[i][cby] == '#' || board[i][cby] == 'R' ) break;
                    }
                }else if(cd == 3){
                    for(int j=cby-1; j>=0; j--){
                        if(board[cbx][j] == 'O'){
                            fail_cnt = 2;
                            break;
                        }
                        if(board[cbx][j] == '.'){
                            dot_x = cbx;
                            dot_y = j;
                        }
                        if(board[cbx][j] == '#' || board[cbx][j] == 'R' ) break;
                    }

                }
                if(fail_cnt == 1){
                    mn = min(mn, ccnt+1);
                    continue;
                }
                board[cbx][cby] = '.';
                if(fail_cnt == 2){
                    continue;
                }else{
                    board[dot_x][dot_y] = 'B';
                    cbx = dot_x;
                    cby = dot_y;
                }
                for(int dir=0; dir<4; dir++){
                    int nx = cx + dx[dir];
                    int ny = cy + dy[dir];
                    int nbx = cbx + dx[dir];
                    int nby = cby + dy[dir];
                    if(nx < 0 || nx >= N || ny < 0 || ny >= M || nbx < 0 || nbx >= N || nby < 0 || nby >= M) continue;
                    if(board[nx][ny] == '#' && board[nbx][nby] == '#') continue;
                    Q.push({cx, cy, dir,ccnt+1,cbx,cby});
                }
        }
    }
    
    if(mn > 10) cout << -1;
    else cout << mn;
    return 0;
}
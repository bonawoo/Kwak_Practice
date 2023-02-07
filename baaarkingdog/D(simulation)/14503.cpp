#include <bits/stdc++.h>

using namespace std;

int N,M,x,y,d;
int room[55][55];
int clear[55][55];
//바라보는 방향 기준 왼쪽 칸 좌표 
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
//바라보는 방향 기준 후진
int bx[4] = {1, 0, -1, 0};
int by[4] = {0, -1, 0, 1};
int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    cin >> N >> M >> x >> y >> d;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> room[i][j];
        }
    }
    clear[x][y] = 1;
    int cnt = 1;
    int cur_x = x;
    int cur_y = y;
    int cur_d = d;
    while(1){
        if((room[cur_x][cur_y-1] || clear[cur_x][cur_y-1]) == 1 && (room[cur_x+1][cur_y] || clear[cur_x+1][cur_y]) == 1 && (room[cur_x][cur_y+1] || clear[cur_x][cur_y+1]) == 1 && (room[cur_x-1][cur_y] || clear[cur_x-1][cur_y]) == 1){ //네 방향 다 벽
            cur_x = cur_x + bx[cur_d];
            cur_y = cur_y + by[cur_d];
            if(room[cur_x][cur_y] == 1) break;
            else continue;
        }
        int nx = cur_x + dx[cur_d];
        int ny = cur_y + dy[cur_d];
        if(clear[nx][ny] == 1 || room[nx][ny] == 1){ //왼쪽 방향이 청소되어 있거나 벽일 경우 회전만
            if(cur_d == 0) cur_d = 3;
            else cur_d = cur_d - 1;
            continue;
        }
        if(clear[nx][ny] == 0 && room[nx][ny] == 0){ //왼쪽 방향에 아직 청소하지 않은 공간 존재
            clear[nx][ny] = 1;
            cnt++;
            cur_x = nx;
            cur_y = ny;
            if(cur_d == 0) cur_d = 3;
            else cur_d = cur_d - 1;
            continue;
        }
    }
    cout << cnt;
    return 0;
}
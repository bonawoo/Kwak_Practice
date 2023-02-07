#include <bits/stdc++.h>

using namespace std;

int N,K,L;
int x,y;
int cx = 1;
int cy = 1;
int cur_dir = 1;
int cnt = 0;
queue<pair<int,int>> tail;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int board[102][102];
int dir[10002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    
    for(int i=0; i<K; i++){
        cin >> x >> y;
        board[x][y] = 1;
    }
    
    cin >> L;
    for(int i=0; i<L; i++){
        int idx;
        char ch;
        cin >> idx >> ch;
        if(ch == 'L') dir[idx] = 1; // L
        else dir[idx] = 2; // D
    }
    tail.push({1,1});
    board[1][1] = 9;
    while(1){
        cnt++;
        int nx = cx + dx[cur_dir];
        int ny = cy + dy[cur_dir];
        if(nx < 1 || nx >= N+1 || ny < 1 || ny >= N+1) break;
        if(board[nx][ny] == 9) break;
        if(board[nx][ny] == 1){
            tail.push({nx,ny});
        }else{
            tail.push({nx,ny});
            auto cur = tail.front();
            tail.pop();
            board[cur.first][cur.second] = 0;
        }
        board[nx][ny] = 9;
        cx = nx;
        cy = ny;
        if(dir[cnt] != 0){
            if(dir[cnt] == 1){ // L
                if(cur_dir == 0) cur_dir = 3;
                else cur_dir -= 1;
            }else{ // D
                if(cur_dir == 3) cur_dir = 0;
                else cur_dir += 1;
            }
        }
    }
    cout << cnt;
    return 0;
}
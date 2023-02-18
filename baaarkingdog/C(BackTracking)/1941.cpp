#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[6];

int cnt = 0;
bool mask[25];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<5; i++){
        cin >> board[i];
    }

    fill(mask+7, mask+25, true);
    do{
        queue<pair<int,int>> Q;
        int adj = 0;
        int cntS = 0;
        bool vis[5][5] = {};
        bool bd[5][5] = {};
        for(int i=0; i<25; i++){
            if(!mask[i]){
                int x = i / 5;
                int y = i % 5;
                bd[x][y] = 1;
                if(Q.empty()){
                    vis[x][y] = 1;
                    Q.push({x,y});
                }
            }
        }
        while(!Q.empty()){
            auto cur = Q.front();
            Q.pop();
            adj++;
            if(board[cur.X][cur.Y] == 'S') cntS++;
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
                if(vis[nx][ny] || bd[nx][ny] != 1) continue;
                vis[nx][ny] = 1;
                Q.push({nx,ny});
            }
        }
        if(adj >= 7 && cntS >= 4) cnt++;
    }while(next_permutation(mask, mask+25));
    cout << cnt;
    return 0;
}
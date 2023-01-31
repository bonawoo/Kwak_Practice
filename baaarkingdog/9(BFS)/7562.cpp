#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second


int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t=0; t<T; t++){
        int I;
        cin >> I;
        int cur_X, cur_Y;
        cin >> cur_X >> cur_Y;
        queue<pair<int,int>> Q;
        int board[301][301] = {};
        int dist[301][301] = {};
        dist[cur_X][cur_Y] = 1;

        int to_X, to_Y;
        cin >> to_X >> to_Y;
        
        if(cur_X == to_X && cur_Y == to_Y){
            cout << 0 << "\n";
            continue;
        }else{
            Q.push({cur_X, cur_Y});
        }
        while(!Q.empty()){
            auto cur = Q.front();
            Q.pop();
            
            for(int dir=0; dir <8; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= I || ny < 0 || ny >= I) continue;
                if(dist[nx][ny] > 0) continue;
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                if(nx == to_X && ny == to_Y){
                    cout << dist[nx][ny] - 1<< "\n";
                    break;
                }
                Q.push({nx,ny});
            }
        }
        
    }
    return 0;
}
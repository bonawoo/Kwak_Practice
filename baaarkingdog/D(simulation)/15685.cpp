#include <bits/stdc++.h>

using namespace std;

int N,x,y,d,gen;
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

int board[101][101];
int rec = 0;
int ex,ey; //끝점
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> y >> x >> d >> gen;
        vector<int> dv;
        ex = x+dx[d];
        ey = y+dy[d];
        board[x][y] = 1;
        board[ex][ey] = 1;
        dv.push_back(d);
        if(gen >= 1){
            if(dv[0] != 3) d = d+1;
            else d = 0;
            ex = ex + dx[d];
            ey = ey + dy[d];
            board[ex][ey] = 1;
            dv.push_back(d);
            for(int g=2; g<=gen; g++){
                for(int v=0; v<(1<<g-1); v++){
                    if(v < (1<<g-2)){
                        if(dv[v] == 0) d = 2;
                        else if(dv[v] == 1) d = 3;
                        else if(dv[v] == 2) d = 0;
                        else if(dv[v] == 3) d = 1;
                        ex = ex + dx[d];
                        ey = ey + dy[d];
                        board[ex][ey] = 1;
                        dv.push_back(d);
                    }else{
                        d = dv[v];
                        ex = ex + dx[d];
                        ey = ey + dy[d];
                        board[ex][ey] = 1;
                        dv.push_back(d);
                    }
                }
            }
        }
    }
    for(int i=0; i<100;i++){
        for(int j=0; j<100; j++){
            if(board[i][j] && board[i+1][j] && board[i][j+1] && board[i+1][j+1]) rec++;
        }
    }
    cout << rec;
    return 0;
}
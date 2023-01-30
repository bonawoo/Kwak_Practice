#include <bits/stdc++.h>

using namespace std;
int n,m;
int board[100002];

int main(){
    cin >> n >> m;
    if(n == m){
        cout << 0;
        return 0;
    }
    board[n] = 1;
    board[m] = -1;
    
    queue<int> Q;
    Q.push(n);
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        for(int dir=0; dir<3; dir++){
            if(dir==0){
                if(board[cur-1] == -1){
                    cout << board[cur];
                    return 0;
                }
                if(cur-1 < 0 || board[cur-1] > 0) continue;
                board[cur-1] = board[cur] +1;
                Q.push(cur-1);
            }else if(dir== 1){
                if(board[cur+1] == -1){
                    cout << board[cur];
                    return 0;
                }
                if(cur+1 > 100000 || board[cur+1] > 0) continue;
                board[cur+1] = board[cur] +1;
                Q.push(cur+1);
            }else if(dir== 2){
                if(cur*2 > 100000) continue;
                if(board[cur*2] == -1){
                    cout << board[cur];
                    return 0;
                }
                if(cur*2 > 100000 || board[cur*2] > 0) continue;
                board[cur*2] = board[cur] +1;
                Q.push(cur*2);
            }
        }
    }
    return 0;
}
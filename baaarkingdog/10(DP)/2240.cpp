#include <bits/stdc++.h>

using namespace std;

int T,W;
int dp1[1002][3]; //max
int dp2[1002][3]; //바꾼 횟수
int board[1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> W;
    
    for(int i=1;i<=T;i++){
        cin >> board[i];
    }
    return 0;
}
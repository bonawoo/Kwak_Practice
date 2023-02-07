#include <bits/stdc++.h>

using namespace std;

int T,K;
int dp[1002][35]; //max
int board[1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> K;
    
    for(int i=1;i<=T;i++){
        cin >> board[i];
    }
    int cnt = 0;
    for(int i=1; i<=T; i++){
        if(board[i] == 1) cnt++;
        dp[i][0] = cnt;
    }
    int mx = cnt;
    for(int i=1;i<=T;i++){
        for(int j=1;j<=K;j++){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + (1 + j % 2 == board[i]);
            mx = max(mx, dp[i][j]);
        }
    }
    cout << mx;
    return 0;
}
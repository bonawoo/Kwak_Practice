#include <bits/stdc++.h>

using namespace std;

int N;
long long dp[10002][3]; 
int board[10002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int tot = 0;
    for(int i=1; i<=N; i++){
        cin >> board[i];
    }
    long long mx = 0;
    dp[1][1] = board[1];
    dp[1][2] = 0;
    dp[2][0] = board[1];
    dp[2][1] = board[2];
    dp[2][2] = dp[1][1] + board[2];
    for(int i=3;i<=N;i++){
        dp[i][0] = max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = max({dp[i-2][0],dp[i-2][1], dp[i-2][2]}) + board[i];
        dp[i][2] = dp[i-1][1] + board[i];
    }
    mx = max({dp[N][0], dp[N][1], dp[N][2]});
    if(N == 1) cout << board[1];
    else if(N == 2) cout << board[1] + board[2];
    else cout << mx;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int N;
int board[1010];
int dp[1010];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> board[i];
    }
    dp[1] = board[1];
    for(int i=2;i<=N;i++){
        dp[i] = board[i];
        for(int j=1;j<=i/2;j++){
            dp[i] = max(dp[i], dp[i-j] + board[j]);
        }
    }
    cout << dp[N];
    return 0;
}
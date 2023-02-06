#include <bits/stdc++.h>

using namespace std;

int dp[505][505];
int N;
int board[505][505];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N;i++){
        for(int j=0; j<1+i; j++){
            cin >> board[i][j];
        }
    }
    dp[0][0] = board[0][0];
    dp[1][0] = dp[0][0] + board[1][0];
    dp[1][1] = dp[0][0] + board[1][1];
    for(int i=2; i<N;i++){
        for(int j=0; j<i+1; j++){
            if(j == 0) dp[i][j] = dp[i-1][j] + board[i][j];
            else if(j == i) dp[i][j] = dp[i-1][j-1] + board[i][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + board[i][j];
        }
    }
    int mx = 0;
    for(int j=0; j<N; j++){
        mx = max(mx, dp[N-1][j]);
    }
    cout << mx;
    return 0;
}
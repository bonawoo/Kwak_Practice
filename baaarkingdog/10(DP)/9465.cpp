#include <bits/stdc++.h>

using namespace std;
int N,T;
int board[2][100010];
int dp[2][100010];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        int mx = 0;
        
        cin >> T;
        for(int i=0; i<T; i++){
            cin >> board[0][i];
            dp[0][i] = 0;
        }
        for(int i=0; i<T; i++){
            cin >> board[1][i];
            dp[0][i] = 0;
        }

        dp[0][0] = board[0][0];
        dp[1][0] = board[1][0];
        mx = max(board[0][0], board[1][0]);
        for(int i=1; i<T; i++){
            dp[0][i] = max(board[0][i] + dp[1][i-1], dp[0][i-1]);
            dp[1][i] = max(board[1][i] + dp[0][i-1], dp[1][i-1]);
            mx = max({mx, dp[0][i], dp[1][i]});
        }
        cout << mx << "\n";
    }
    return 0;
}
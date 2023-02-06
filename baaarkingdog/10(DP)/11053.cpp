#include <bits/stdc++.h>

using namespace std;

int N;
int dp[1002];
int board[1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    dp[0] = 1;
    int mx = dp[0];
    for(int i=1; i<N; i++){
        dp[i] = 1;
        for(int j=i-1; j>=0; j--){
            if(board[i] > board[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        mx = max(mx, dp[i]);
    }
    cout << mx;
    return 0;
}
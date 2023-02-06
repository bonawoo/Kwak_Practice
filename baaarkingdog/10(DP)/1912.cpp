#include <bits/stdc++.h>

using namespace std;

long long dp[100002];
long long board[100002];
int N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    long long mx = board[0];
    if(board[0] > 0){
        dp[0] = board[0];
        mx = dp[0];
    }
    for(int i=1; i<N; i++){
        if(board[i] + dp[i-1] > 0){
            dp[i] = board[i] + dp[i-1];
            mx = max(dp[i], mx);
        }else{
            mx = max(board[i], mx);
            dp[i] = 0;
        }
    }
    cout << mx;
    return 0;
}
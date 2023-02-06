#include <bits/stdc++.h>

using namespace std;

long long dp[105];
int N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    dp[1] = 1;
    dp[2] = 1;
    for(int i=3; i<=N; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    cout << dp[N];
    return 0;
}
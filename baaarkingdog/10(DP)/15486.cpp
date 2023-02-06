#include <bits/stdc++.h>

using namespace std;

int N;

long long dp[102];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    dp[1] = 9;
    for(int i=2; i<=N; i++){
        dp[i] = (dp[i-1]*2 - (i-1)) % 1000000000;
    }
    cout << dp[N];
    return 0;
}
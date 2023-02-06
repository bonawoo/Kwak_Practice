#include <bits/stdc++.h>

using namespace std;

int N;

long long dp[102];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i=2; i<=91; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cin >> N;
    cout << dp[N];
    return 0;
}
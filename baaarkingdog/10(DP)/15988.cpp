#include <bits/stdc++.h>

using namespace std;

int T;
long long dp[1000002]; 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4;i<=1000000;i++){
        dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]) % 1000000009;
    }
    int N;
    for(int i=0;i<T;i++){
        cin >> N;
        cout << dp[N] << "\n";
    }
    return 0;
}
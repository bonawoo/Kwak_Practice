#include <bits/stdc++.h>

using namespace std;

int n,m;
unsigned long long dp[150][150];
unsigned long long dp2[150][150];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    dp[0][0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j == 0 || j == i){
                dp[i][j] = dp[i-1][0];
            }else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                dp2[i][j] = dp2[i-1][j-1] + dp2[i-1][j];
                if(dp[i][j] > 10000000000000000){
                    dp2[i][j] += dp[i][j] / 10000000000000000;
                    dp[i][j] %= 10000000000000000;
                }
            }
        }
    }

    if(dp2[n][m] > 0) printf("%lld%016lld", dp2[n][m], dp[n][m]);
    else cout << dp[n][m];
    return 0;
}
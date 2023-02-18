#include <bits/stdc++.h>

using namespace std;
int N;
int dp[100010];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    dp[1] = 1;
    for(int i=2; i<=N; i++){
        int chk = 1;
        dp[i] = 1+dp[i-chk];
        for(int j=2; j*j<=i; j++){
            if(j*j == i){
                chk = 0;
                dp[i] = 1;
                break;
            }
            chk = (j)*(j);
            dp[i] = min(dp[i], 1 + dp[i-chk]);
        }
        
    }
    cout << dp[N];
    return 0;
}
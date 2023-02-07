#include <bits/stdc++.h>

using namespace std;

int N;
int dp[1002][10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<10; i++){
        dp[1][i] = 1;
    }
    for(int i=2; i<=N; i++){
        dp[i][0] = 1;
        for(int j=1; j<10; j++){
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 10007;
        }
    }
    int tot=0;
    for(int i=0; i<10; i++){
        tot += dp[N][i];
    }
    cout << tot % 10007;
    return 0;
}
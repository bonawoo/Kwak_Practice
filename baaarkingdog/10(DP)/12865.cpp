#include <bits/stdc++.h>

using namespace std;
int N, K;
int w[100001];
int v[1001];
int dp[105][100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for(int i=1; i<=N; i++){
        cin >> w[i] >> v[i];
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=K; j++){ //무게
            if(w[i] <= j){
                dp[i][j] = max(v[i]+dp[i-1][j-w[i]], dp[i-1][j]);
            }else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[N][K];
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int N;
int T[20];
int P[20];
int dp[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> T[i] >> P[i];
    }
    dp[N+1] = 0;
    for(int i=1; i<=N; i++){
        if(T[i]+i <= N+1){
            dp[i] = max(dp[i], dp[i-1]);
            dp[i+T[i]] = max(dp[i+T[i]], dp[i]+P[i]);
        }
    }
    int mx = 0;
    for(int i=1; i<=N+1; i++){
        mx = max(dp[i], mx);
    }
    cout << mx;
    return 0;
}
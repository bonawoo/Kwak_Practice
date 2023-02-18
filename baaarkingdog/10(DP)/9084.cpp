#include <bits/stdc++.h>

using namespace std;
int T,N,M;
int dp[10010];
int coin[30];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--){
        cin >> N;
        for(int i=0; i<N; i++){
            cin >> coin[i];
            dp[coin[i]] = 1;
        }
        cin >> M;
        for(int i=coin[0]+1; i<=M; i++){
            for(int c=0; c<N; c++){
                if(dp[i-coin[c]] != 0) dp[i] = max(dp[i], dp[coin[c]] + dp[i-coin[c]]);
            }
            cout << dp[i] << " ";
        }
        cout << dp[M] << "\n";
    }
    return 0;
}
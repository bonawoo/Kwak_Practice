#include <bits/stdc++.h>

using namespace std;

int N;
long long dp[1000002]; 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    dp[0]= 0;
    dp[1] =1;
    for(int i=2;i<=abs(N);i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000000;
    }
    if(N > 0){
        cout << 1 << "\n" << dp[N];
    }else if(N==0){
        cout << 0 << "\n" << dp[N];
    }else{
        if(abs(N) % 2 == 0) cout << -1 << "\n" << dp[abs(N)];
        else cout << 1 << "\n" << dp[abs(N)];
    }
    
    return 0;
}
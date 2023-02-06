#include <bits/stdc++.h>

using namespace std;

int dp[42];
int N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=40; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        if(num == 0) cout << 1 << " " << 0 << "\n";
        else{
            cout << dp[num-1] << " " << dp[num] << "\n";
        }
    }
    return 0;
}
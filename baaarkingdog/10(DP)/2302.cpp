#include <bits/stdc++.h>

using namespace std;

int N,M;
vector<int> v;
long long dp[45];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<M; i++){
        int m;
        cin >> m;
        v.push_back(m);
    }
    v.push_back(N+1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3; i<=40; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    int tot = 1;
    int idx = 1;
    for(auto it : v){
        tot *= dp[(it - idx)];
        idx = it+1;
    }
    cout << tot;
    return 0;
}
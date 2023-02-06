#include <bits/stdc++.h>

using namespace std;

int N;
int dp[1002];
int pre[1002];
deque<int> v;
int board[1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> board[i];
    }
    dp[1] = 1;
    int mx = dp[1];
    for(int i=2; i<=N; i++){
        dp[i] = 1;
        for(int j=i-1; j>=1; j--){
            if(board[i] > board[j] && dp[i] < dp[j]+1){
                dp[i] =dp[j] + 1;
                //이전 index 저장
                pre[i] = j;
            }
        }
        mx = max(mx, dp[i]);
    }
    cout << mx << "\n";
    int maxi = 1;
    int maxd = dp[1];
    for(int i=2; i<=N; i++){
        if(maxd < dp[i]){
            maxi = i;
            maxd = dp[i];
        }
    }
    int cur = maxi;
    while(cur){
        v.push_front(board[cur]);
        cur = pre[cur];
    }
    for(auto it : v) cout << it << " ";
    return 0;
}
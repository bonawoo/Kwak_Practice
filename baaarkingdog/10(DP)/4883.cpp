#include <bits/stdc++.h>

using namespace std;

int N;
int k=0;
int board[100010][3];
long long dp[100010][3];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin >> N;
        if(N == 0) break;
        k++;
        for(int i=0; i<N; i++){
            for(int j=0;j<3; j++){
                cin >> board[i][j];
            }
        }
        
        dp[0][0] = 10000000;
        dp[0][1] = board[0][1];
        dp[0][2] = board[0][1] + board[0][2];
        for(int i=1; i<N; i++){
            dp[i][0] = min(dp[i-1][0], dp[i-1][1]) + board[i][0];
            dp[i][1] = min({dp[i][0], dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + board[i][1];
            dp[i][2] = min({dp[i][1], dp[i-1][1], dp[i-1][2]}) +board[i][2];
        }
        cout << k << ". " <<  dp[N-1][1] << "\n";
    }
    return 0;
}
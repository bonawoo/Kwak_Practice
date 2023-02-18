#include <bits/stdc++.h>

using namespace std;
int N, K;
int d[1002][1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    d[1][0] = 1;
    d[1][1] = 1;
    for(int i=2; i<=1000;i++){
        d[i][0] = 1;
        for(int j=1; j<i; j++){
            d[i][j] = (d[i-1][j-1] + d[i-1][j]) % 10007;
        }
        d[i][i] = 1;
    }
    cout << d[N][K];
    return 0;
}
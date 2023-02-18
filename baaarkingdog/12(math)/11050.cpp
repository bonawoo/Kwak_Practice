#include <bits/stdc++.h>

using namespace std;
int N, K;
int tot = 1;
int di = 1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    if(N - K < N/2) K = N-K;
    for(int i=1; i<=K; i++){
        tot *= N;
        di *= i;
        N--;
    }
    cout << tot / di;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int N,K;
int coin[11];
int cnt = 0;
int main(){
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> coin[i];
    }
    for(int i=N-1; i>=0; i--){
        if(coin[i] <= K){
            cnt += K/coin[i];
            K = K % coin[i];
        }
        if(K == 0) break;
    }
    cout << cnt;
    return 0;

}
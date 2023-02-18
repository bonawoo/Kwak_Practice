#include <bits/stdc++.h>

using namespace std;
int N, K;
int d[1002][1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    vector<bool> state(N+1, true);
    int cnt = 0;
    for(int i=2; i<=N; i++){
        if(!state[i]) continue;
        cnt++;
        if(cnt == K){
            cout << i;
            return 0;
        }
        for(int j=i+i;j<=N; j+=i){
            if(state[j]){
                state[j] = false;
                cnt++;
                if(cnt == K){
                    cout << j;
                    return 0;
                }
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int N = 123456;
int a;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<bool> state(N*2+1, true);
    state[1] = false;
    for(int i=2; i*i <= 2*N; i++){
        if(!state[i]) continue;
        for(int j=i*i; j<= 2*N; j+=i){
            state[j] = false;
        }
    }
    while(1){
        cin >> a;
        if(a == 0) return 0;
        int cnt = 0;
        for(int i=a+1; i<=2*a;i++){
            if(state[i]) cnt++;
        }

        cout << cnt << '\n';
    }
    return 0;
}
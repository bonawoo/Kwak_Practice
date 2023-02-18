#include <bits/stdc++.h>

using namespace std;
int M, N;
vector<long long> prime;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N;
    vector<bool> state(N+1, true);
    state[1] = false;
    for(long long i=2; i*i<=N; i++){
        if(!state[i]) continue;
        for(long long j=i*i; j<=N; j += i){
            state[j] = false;
        }
        if(i >= M) prime.push_back(i);
    }
    for(auto it : prime) cout << it << '\n';
    return 0;
}
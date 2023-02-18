#include <bits/stdc++.h>
using namespace std;
int N;
int t[10001];
long long tot = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> t[i];
    }
    sort(t,t+N);
    int cur = 0;
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            cur = t[i] + t[j];
            if(binary_search(t+j+1,t+N,cur*-1)){
                tot += upper_bound(t+j+1,t+N,cur*-1) - lower_bound(t+j+1,t+N,cur*-1);
            }
        }
    }
    cout << tot;
    return 0;
}

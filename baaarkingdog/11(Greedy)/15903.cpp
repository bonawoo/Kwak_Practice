#include <bits/stdc++.h>

using namespace std;
int n,m;
long long b[1010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    while(m--){
        swap(b[0], *min_element(b,b+n));
        swap(b[1], *min_element(b+1,b+n));
        long long sum = b[0] + b[0+1];
        b[0] = sum;
        b[0+1] = sum;
    }
    long long tot = 0;
    for(int i=0; i<n; i++){
        tot += b[i];
    }
    cout << tot;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int t,n;
int bo[110];
int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a, a);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        long long tot = 0;
        for(int i=0; i<n; i++){
            cin >> bo[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                tot += gcd(bo[i],bo[j]);
            }
        }
        cout << tot << '\n';
    }
    return 0;
}

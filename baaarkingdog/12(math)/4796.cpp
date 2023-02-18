#include <bits/stdc++.h>

using namespace std;
int L, P,V;
int d[1002][1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i = 1;
    while(1){
        cin >> L >> P >> V;
        if(!L && !P && !V) return 0;
        if(V % P > L) cout << "Case " << i << ": " << V/P*L + L  << '\n';
        else cout << "Case " << i << ": " << V/P*L + (V % P)  << '\n';
        i++;
    }
    return 0;
}
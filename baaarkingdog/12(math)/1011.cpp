#include <bits/stdc++.h>

using namespace std;

int T,x,y;
int solve(long long s){
    return sqrt(s)*2 -1e-9;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--){
        cin >> x >> y;
        long long s = y-x;
        cout << solve(s) << '\n';
    }
    return 0;
}

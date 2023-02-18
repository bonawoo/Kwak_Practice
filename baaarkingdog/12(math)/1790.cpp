#include <bits/stdc++.h>

using namespace std;
int n, k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    int len = 1;
    int exp = 1;
    while(k > 9LL * len * exp){
        k -= 9LL * len * exp;
        len++;
        exp *= 10;
    }
    int target = exp +(k-1) / len;
    if(n < target) cout << -1;    
    else cout << to_string(target)[(k-1) % len];
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int n;
int f;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a,a);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> f;
    while(--n){
        int a;
        cin >> a;
        int g = gcd(a,f);
        cout << f / g <<"/" << a/g <<'\n';
    }
    return 0;
}

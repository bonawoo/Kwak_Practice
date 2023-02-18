#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n,m;

ll solve(ll num ,int p){
    ll cnt = 0;
    ll div = p;
    while(num / div){
        cnt += num / div;
        div *= p;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    ll two = solve(n,2) - solve(m,2) - solve((n-m),2);
    ll five = solve(n,5) - solve(m,5) - solve((n-m),5);
    cout << min(two, five);
    return 0;
}

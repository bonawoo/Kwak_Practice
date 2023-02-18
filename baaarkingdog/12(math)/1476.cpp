#include <bits/stdc++.h>

using namespace std;

int e,s,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> e >> s >> m;
    if(e == s && s == m){
        cout << e;
        return 0;
    }
    if(s == 28) s = 0;
    if(m == 19) m = 0;
    for(int i=e; ;i += 15){
        if(i % 28 == s && i % 19 == m){
            cout << i;
            return 0;
        }
    }
    return 0;
}

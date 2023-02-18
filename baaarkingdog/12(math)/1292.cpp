#include <bits/stdc++.h>

using namespace std;
int n, m;
int d[5010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int cur = 1;
    int idx = 1;
    while(idx < 1001){
        for(int i=0; i<cur; i++){
            d[idx] = d[idx-1] + cur;
            idx++;
            if(idx > 1000) break;
        }
        cur++;
    }
    cout << d[m] - d[n-1];
    return 0;
}

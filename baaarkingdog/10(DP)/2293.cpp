#include <bits/stdc++.h>

using namespace std;

int n,k;

int a[110];
int d[10010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    d[0] = 1;
    for(int i=0; i<n; i++){
        for(int j=a[i]; j<=k; j++){
            d[j] += d[j-a[i]];
        }
    }
    cout << d[k];
    return 0;
}
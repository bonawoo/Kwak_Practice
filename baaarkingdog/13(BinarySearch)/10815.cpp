#include <bits/stdc++.h>

using namespace std;
int n, k;
int st,en,mid,num;
int t[500010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t[i];
    }
    sort(t,t+n);
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> num;
        if(binary_search(t,t+n, num)){
            cout << 1 << " ";
        }else cout << 0 << " ";

    }
    return 0;
}

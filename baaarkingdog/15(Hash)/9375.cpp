#include <bits/stdc++.h>

using namespace std;

int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        unordered_map<string,int> um;
        cin >> m;
        for(int j=1; j<=m; j++){
            string str1, str2;
            cin >> str1 >> str2;
            um[str2]++;
        }
        int tot = 1;
        for(auto it : um){
            tot *= (it.second+1);
        }
        cout << tot-1 << '\n';
    }
    if(n == 0) cout << 0 << '\n';
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    string str1, str2;
    unordered_map<string,string> um;
    for(int i=1; i<=n; i++){
        cin >> str1 >> str2;
        um[str1] = str2;
    }
    for(int i=0; i<m; i++){
        cin >> str1;
        cout << um[str1] << '\n';
    }
    
    return 0;
}
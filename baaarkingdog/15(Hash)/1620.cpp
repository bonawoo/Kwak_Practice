#include <bits/stdc++.h>

using namespace std;

int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    unordered_map<string,int> um;
    unordered_map<int,string> um2;
    for(int i=1; i<=n; i++){
        string str1;
        cin >> str1;
        um[str1] = i;
        um2[i] = str1;
    }
    for(int i=0; i<m; i++){
        string str2;
        cin >> str2;
        if(um.find(str2) != um.end()){
            cout << um[str2] << '\n';
        }else{
            cout << um2[stoi(str2)] << '\n';
        }
    }
    
    return 0;
}
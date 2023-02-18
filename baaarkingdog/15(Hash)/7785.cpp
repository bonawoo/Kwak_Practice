#include <bits/stdc++.h>

using namespace std;

int n;
bool cmp(string a, string b){
    return  a> b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    unordered_map<string,int> um;
    for(int i=0; i<n; i++){
        string str1, str2;
        cin >> str1 >> str2;
        if(str2 == "enter"){
            um[str1]++;
        }else{
            um[str1]--;
        }
    }
    vector<string> v;
    for(auto it : um){
        if(it.second > 0) v.push_back(it.first);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << it << '\n';
    return 0;
}
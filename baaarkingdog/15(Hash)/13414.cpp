#include <bits/stdc++.h>

using namespace std;

int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    unordered_set<string> us;
    string stud;
    while(m--){
        cin >> stud;
        //if(us.count(stud)) us.erase(stud);
        us.insert(stud);
    }
    int cur = 0;
    vector<string> v;
    for(string it : us){
        if(cur == n) break;
        v.push_back(it);
        cur++;
    }
    for(auto it : v) cout << it << '\n';
    
    return 0;
}
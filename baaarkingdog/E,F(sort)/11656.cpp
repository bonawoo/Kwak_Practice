#include <bits/stdc++.h>

using namespace std;

string str1;
vector<string> sv;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> str1;
    sv.push_back(str1);
    int lt = str1.length();
    for(int i=0; i<lt-1; i++){
        str1.erase(str1.begin());
        sv.push_back(str1);
    }
    sort(sv.begin(), sv.end());
    for(auto it : sv){
        cout << it << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

vector<int> cnt(10);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin >> A >> B >> C;
    int total = A*B*C;
    string str1 = to_string(total);
    for(auto it : str1){
        cnt[it - '0']++;
    }
    for(int i=0; i<cnt.size(); i++){
        cout << cnt[i] << "\n";
    }
    
    return 0;
}
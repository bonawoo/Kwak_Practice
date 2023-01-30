#include <bits/stdc++.h>

using namespace std;

vector<int> cnt(10);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A;
    cin >> A;
    string str1 = to_string(A);
    for(auto it : str1){
        if(it == '6' || it == '9'){
            if(cnt[6] < cnt[9]){
                cnt[6]++;
            }else{
                cnt[9]++;
            }
        }else{
            cnt[it - '0']++;
        }
    }
    cout << *max_element(cnt.begin(), cnt.end());
    
    return 0;
}
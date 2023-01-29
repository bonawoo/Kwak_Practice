#include <bits/stdc++.h>

using namespace std;

vector<int> cnt(101);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> num = {1, 52, 48};
    for(auto it : num){
        cnt[it]++;
    }
    for(auto it : num){
        if(cnt[100-it] > 0){
            cout << 1;
            break;
        }
    }
    
    return 0;
}
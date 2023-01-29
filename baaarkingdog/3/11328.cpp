#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string str1, str2;
    for(int i=0; i<N; i++){
        vector<int> cnt1(26);
        vector<int> cnt2(26);
        cin >> str1 >> str2;
        for(auto it : str1){
            cnt1[it - 'a']++;
        }
        for(auto it : str2){
            cnt2[it - 'a']++;
        }
        if(cnt1 == cnt2){
            cout << "Possible" << "\n";
        }else cout << "Impossible" << "\n";
    }
    return 0;
}
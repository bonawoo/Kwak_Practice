#include <bits/stdc++.h>

using namespace std;
vector<int> cnt(26);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer = 0;
    string str1, str2;
    cin >> str1 >> str2;
    for(auto it : str1){
        cnt[it - 'a']++;
    }
    for(auto it : str2){
        cnt[it - 'a']--;
    }
    for(int i=0; i<cnt.size(); i++){
        if(cnt[i] < 0){
            answer += (cnt[i]) * -1;
        }else {
            answer += cnt[i];
        }
    }
    cout << answer;
    return 0;
}
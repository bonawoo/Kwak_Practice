#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> alphabet(26);
    string str1;
    cin >> str1;
    for(auto it : str1){
        alphabet[it - 'a']++;
    }
    for(int i=0; i<alphabet.size(); i++){
        cout << alphabet[i] << " ";
    }
    return 0;
}
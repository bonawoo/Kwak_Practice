#include <bits/stdc++.h>

using namespace std;
int arr[26];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    cin >> str1;
    int mx = 0;
    for(auto it : str1){
        arr[tolower(it) - 'a']++;
        if(arr[tolower(it) - 'a'] > mx) mx = arr[tolower(it) - 'a'];
    }
    int mx_cnt = 0;
    char mx_char;
    for(int i=0; i<27; i++){
        if(arr[i] == mx){
            mx_cnt++;
            mx_char = i;
        }
    }
    if(mx_cnt < 2) cout << (char) toupper((mx_char + 'a'));
    else cout << "?";
    return 0;
}
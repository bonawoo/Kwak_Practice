#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    getline(cin, str1);
    int answer = 1;
    for(auto it : str1){
        if(it == ' ') answer++;
    }
    if(str1[0] == ' ') answer--;
    if(str1[str1.length()-1] == ' ') answer--;
    cout << answer;
    return 0;
}
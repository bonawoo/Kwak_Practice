#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    cin >> str1;
    int answer = 0;
    int cnt = 0;
    stack<char> S;
    for(auto it : str1){
        if(it == ')'){
            if(S.top() == '('){
                cnt--;
                answer += cnt;
            }else{
                cnt--;
                answer++;
            }
        }else{
            cnt++;
        }
        S.push(it);
    }
    cout << answer;
    return 0;
}
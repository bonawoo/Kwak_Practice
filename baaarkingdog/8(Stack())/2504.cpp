#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1;
    cin >> str1;
    int answer = 0;
    int x_cnt = 1;
    int y_cnt = 1;
    stack<char> S;
    stack<char> S2;
    for(auto it : str1){
        if(it == '('){
            S.push(it);
            S2.push(it);        
            x_cnt *= 2;
        }else if(it == '['){
            S.push(it);
            S2.push(it);   
            y_cnt *= 3;
        }else if(it == ')'){
            if(!S.empty() && !S2.empty()){
                if(S.top() == '('){
                    S.pop();
                    if(S2.top() == '('){
                        answer += x_cnt * y_cnt;
                    }
                    x_cnt /= 2;
                }else{
                    cout << 0;
                    return 0;
                }
            }else{
                cout << 0;
                return 0;
            }
            S2.push(it);   
        }else if(it == ']'){
            if(!S.empty() && !S2.empty()){
                if(S.top() == '['){
                    S.pop();
                    if(S2.top() == '['){
                        answer += x_cnt * y_cnt;
                    }
                    y_cnt /= 3;
                }else{
                    cout << 0;
                    return 0;
                }
            }else{
                cout << 0;
                return 0;
            }
            S2.push(it);   
        }
    }
    if(S.empty()) cout << answer;
    else cout << 0;
    return 0;
}
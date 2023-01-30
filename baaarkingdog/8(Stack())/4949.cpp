#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1;
    string answer;
    while(1){
        
        getline(cin, str1);
        stack<char> S;
        if(str1 == ".") break;
        answer = "yes";
        for(auto it : str1){
            if(it == '(' || it == '['){
                S.push(it);
            }else if(it == ')'){
                if(!S.empty()){
                    if(S.top() == '('){
                        S.pop();
                    }else{
                        answer = "no";
                        break;
                    }
                }else{
                    answer = "no";
                    break;
                }
            }else if(it == ']'){
                if(!S.empty()){
                    if(S.top() == '['){
                        S.pop();
                    }else{
                        answer = "no";
                        break;
                    }
                }else{
                    answer = "no";
                    break;
                }
            }
        }
        if(!S.empty()) answer = "no";
        cout << answer << "\n";
    }

    return 0;
}
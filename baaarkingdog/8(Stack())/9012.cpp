#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    string str1;
    string answer;
    for(int i=0; i<N; i++){
        cin >> str1;
        stack<char> S;
        answer = "YES";
        for(auto it : str1){
            if(it == '('){
                S.push(it);
            }else if(it == ')'){
                if(!S.empty()){
                    if(S.top() == '('){
                        S.pop();
                    }else{
                        answer = "NO";
                        break;
                    }
                }else{
                    answer = "NO";
                    break;
                }
            }
        }
        if(!S.empty()) answer = "NO";
        cout << answer << "\n";
    }
    

    return 0;
}
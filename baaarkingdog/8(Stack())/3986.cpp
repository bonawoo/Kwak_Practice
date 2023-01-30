#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    string str1;
    int answer = 0;
    for(int i=0; i<N; i++){
        cin >> str1;
        stack<char> S;
        for(auto it : str1){
            if(!S.empty()){
                if(S.top() == it){
                    S.pop();
                }else{
                    S.push(it);
                }
            }else S.push(it);
        }
        if(S.empty()) answer++;
    }
    cout << answer;
    return 0;
}
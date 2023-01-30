#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    stack<int> S;
    string str1;
    int A;
    for(int i=0; i<N; i++){
        cin >> str1;
        if(str1 == "push"){
            cin >> A;
            S.push(A);
        }else if(str1 == "pop"){
            if(S.empty()){
                cout << -1 << "\n";
            }else{
                cout << S.top() << "\n";
                S.pop();
            }
        }else if(str1 == "size"){
            cout << S.size() << "\n";
            
        }else if(str1 == "empty"){
            if(S.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
            
        }else if(str1 == "top"){
            if(S.empty()){
                cout << -1 << "\n";
            }else{
                cout << S.top() << "\n";
            }
        }
    }
    return 0;
}
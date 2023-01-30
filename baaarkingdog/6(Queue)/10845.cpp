#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    queue<int> Q;
    string str1;
    int A;
    for(int i=0; i<N; i++){
        cin >> str1;
        if(str1 == "push"){
            cin >> A;
            Q.push(A);
        }else if(str1 == "pop"){
            if(Q.empty()){
                cout << -1 << "\n";
            }else{
                cout << Q.front() << "\n";
                Q.pop();
            }
        }else if(str1 == "size"){
            cout << Q.size() << "\n";
            
        }else if(str1 == "empty"){
            if(Q.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
            
        }else if(str1 == "front"){
            if(Q.empty()){
                cout << -1 << "\n";
            }else{
                cout << Q.front() << "\n";
            }
        }else if(str1 == "back"){
            if(Q.empty()){
                cout << -1 << "\n";
            }else{
                cout << Q.back() << "\n";
            }
        }
    }
    return 0;
}
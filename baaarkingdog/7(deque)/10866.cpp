#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    deque<int> DQ;
    string str1;
    int A;
    for(int i=0; i<N; i++){
        cin >> str1;
        if(str1 == "push_front"){
            cin >> A;
            DQ.push_front(A);
        }else if(str1 == "push_back"){
            cin >> A;
            DQ.push_back(A);
        }else if(str1 == "pop_front"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }else{
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        }else if(str1 == "pop_back"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }else{
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
        }else if(str1 == "size"){
            cout << DQ.size() << "\n";
            
        }else if(str1 == "empty"){
            if(DQ.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
            
        }else if(str1 == "front"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }else{
                cout << DQ.front() << "\n";
            }
        }else if(str1 == "back"){
            if(DQ.empty()){
                cout << -1 << "\n";
            }else{
                cout << DQ.back() << "\n";
            }
        }
    }
    return 0;
}
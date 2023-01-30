#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,A;
    cin >> N;

    stack<int> S;
    vector<char> v;
    int cur = 0;
    for(int i=0; i<N; i++){
        cin >> A;
        for(int j=cur+1; j<=A; j++){
            S.push(j);
            v.push_back('+');
            cur++;
        }
        while(1){
            v.push_back('-');
            if(S.empty()){
                cout << "NO";
                return 0;
            }
            if(S.top() == A){
                S.pop();
                break;
            }else if(S.top() < A){
                cout << "NO";
                return 0;
            }else{
                S.pop();
            }
        }
    }
    for(auto it : v){
        cout << it << "\n";
    }
    return 0;
}
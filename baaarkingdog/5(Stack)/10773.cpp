#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    stack<int> S;
    int A;
    for(int i=0; i<N; i++){
        cin >> A;
        if(A == 0){
            if(!S.empty()){
                S.pop();
            }
        }else{
            S.push(A);
        }
    }
    int answer=0;
    while(S.size()){
        answer += S.top();
        S.pop();
    }
    cout << answer;
    return 0;
}
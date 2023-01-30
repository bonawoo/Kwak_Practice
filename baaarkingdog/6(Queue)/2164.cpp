#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    queue<int> Q;

    for(int i=0; i<N; i++){
        Q.push(i+1);
    }
    int A;
    while(Q.size() != 1){
        Q.pop();
        A = Q.front();
        Q.pop();
        Q.push(A);
    }
    cout << Q.back();
    return 0;
}
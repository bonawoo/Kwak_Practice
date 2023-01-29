#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A,B,C;
    cin >> A >> B >> C;
    if(A == B && B == C && A == C){
        cout << (10000 + A*1000);
    }else if(A == B){
        cout << (1000 + A*100);
    }else if(A == C){
        cout << (1000 + A*100);
    }else if(B == C){
        cout << (1000 + B*100);
    }else{
        if(A > B && A > C) cout << A*100;
        else if(B > A && B > C) cout << B*100;
        else if(C > B && C > A) cout << C*100;
    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A;
    cin >> A;
    if(A >= 90){
        cout << "A";
    }else if(A >= 80){
        cout << "B";
    }else if(A >= 70){
        cout << "C";
    }else if(A >= 60){
        cout << "D";
    }else{
        cout << "F";
    }
    return 0;
}
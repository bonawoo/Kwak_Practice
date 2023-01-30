#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A;
    int max = 10000000;
    int total = 0;
    for(int i=0; i<7; i++){
        cin >> A;
        if(A % 2 != 0){
            total += A;
            if(max > A) max = A;
        }
    }
    if(total == 0){
        cout << -1;
    }else{
        cout << total << "\n" << max;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long A,B;
    cin >> A >> B;
    if(B > (A+1)){
        cout << (B - A) - 1 << "\n";
        for(unsigned long long i=A+1; i<B; i++){
            cout << i << " ";
        }
    }else if(A > (B+1)){
        cout << (A - B) - 1 << "\n";
        for(unsigned long long i=B+1; i<A; i++){
            cout << i << " ";
        }
    }else{
        cout << 0;
    }
    
    return 0;
}
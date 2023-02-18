#include <bits/stdc++.h>

using namespace std;

int A,B;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B;
    int cnt = 1;
    while(A != B){
        if(B % 2 == 0) B /= 2;
        else{
            if(B % 10 == 1) B /= 10;
            else{
                cout << -1;
                return 0;
            }
        }
        if(B == 0){
            cout << -1;
            return 0;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}
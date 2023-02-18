#include <bits/stdc++.h>

using namespace std;
int N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int i = 2;
    while(N != 1){
        if(N < i*i){
            cout << N;
            break;
        }
        if(N % i == 0){
            cout << i << '\n';
            N /= i;
        }else i++;
    }
    return 0;
}
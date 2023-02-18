#include <bits/stdc++.h>

using namespace std;

int N, k, i;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> k >> i;
    int cnt = 1;
    if(k > i) swap(k,i);
    while(N != 1){
        if(i == k+1 && k % 2 == 1){
            cout << cnt;
            return 0;
        }
        if(N % 2 == 0){
            N /= 2;
            cnt++;
            if(i % 2 != 0) i = (i+1)/2;
            else i = i/2;
            if(k % 2 != 0) k = (k+1)/2;
            else k = k/2;
        }else{
            N = (N+1)/2;
            cnt++;
            if(i % 2 != 0) i = (i+1)/2;
            else i = i/2;
            if(k % 2 != 0) k = (k+1)/2;
            else k = k/2;
        }
    }
    cout << -1;
    return 0;
}

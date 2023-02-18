#include <bits/stdc++.h>

using namespace std;
int N;
int tot = 0;
int func(int b){
    if(b <= 1) return 0;
    for(int i=2; i*i<=b; i++){
        if(b % i == 0) return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while(N--){
        int a;
        cin >> a;
        tot += func(a);
    }
    cout << tot;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int func(int n, int x, int y){
    if(n == 0 ) return 0;
    int half = 1<<(n-1);
    if(x < half && y < half){
        return func(n-1,x,y);
    }else if(x < half && y >= half){
        return half*half + func(n-1, x, y-half);
    }else if(x >= half && y < half){
        return 2*half*half + func(n-1, x-half, y);
    }else{
        return 3*half*half + func(n-1, x-half, y-half);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,X,Y;
    cin >> N >> X >> Y;
    cout << func(N, X, Y);
    return 0;
}
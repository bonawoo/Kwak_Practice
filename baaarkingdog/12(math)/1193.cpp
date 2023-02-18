#include <bits/stdc++.h>

using namespace std;
int N;
int d[1002][1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int x,y;
    int i=1;
    while(N > i){
        N -= i;
        i++;
    }
    x = N;
    y = i + 1 - x;
    if(i % 2) swap(x,y);
    cout << x << "/" << y;
    return 0;
}
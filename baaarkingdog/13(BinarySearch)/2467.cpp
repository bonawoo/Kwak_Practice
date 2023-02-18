#include <bits/stdc++.h>
using namespace std;

int N;
int t[100010];
int a = 1e9+1;
int b = 1e9+1;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> t[i];
    }
    for(int i=0; i<N; i++){
        int idx = lower_bound(t, t+N, -1*t[i]) - t;
        if(idx+1 < N && i != idx+1 && abs(t[i] + t[idx+1]) < abs(a+b)){
            a = t[i];
            b = t[idx+1];
        }
        if(idx < N && i != idx && abs(t[i] + t[idx]) < abs(a+b)){
            a = t[i];
            b = t[idx];
        }
        if(idx-1 >= 0 && i != idx-1 && abs(t[i] + t[idx-1]) < abs(a+b)){
            a = t[i];
            b = t[idx-1];
        }

    }
    if(a > b) swap(a,b);
    cout << a << " " << b;
    return 0;
}

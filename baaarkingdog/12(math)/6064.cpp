#include <bits/stdc++.h>

using namespace std;
int T, M, N, x, y;
int gcd(int a, int b){
    if(a == 0) return b;
    else return gcd(b%a, a);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--){
        cin >> M >> N >> x >> y;
        long long max = M / gcd(M,N) * N; //최대공배수
        if(x == M && y == N){
            cout << max << '\n';
            continue;
        }
        int brk = 0;
        for(int i=x; i<=max; i+= M){
            if(i % N == y){
                cout << i << '\n';
                brk++;
                break;
            }
        }
        if(brk == 0){
            for(int i=y; i<=max; i+= N){
                if(i % M == x){
                    cout << i << '\n';
                    brk++;
                    break;
                }
            }
        }
        if(!brk) cout << -1 << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N;
int t[5001];
ll tt[5001*2500];
ll a = 3000000001;
ll b = 3000000001;
ll c = 3000000001;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> t[i];
    }
    sort(t,t+N);
    int cur = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            tt[cur] = t[i]+t[j];
            cur++;
        }
    }
    sort(tt,tt+cur);
    for(int i=0; i<N; i++){
        int idx = lower_bound(tt,tt+cur, t[i]*-1) - (tt);
        if(idx+1 < cur && i != idx+1 && abs(tt[idx+1] + t[i]) < abs(a+b+c)){
            for(int j=0; j<N; j++){
                if(j != i && binary_search(t,t+N, tt[idx+1]-t[j])){
                    int ix = lower_bound(t,t+N, tt[idx+1]-t[j]) - (t);
                    if(i != ix && ix != j){
                        a = t[i];
                        b = t[j];
                        c = t[ix];
                    }
                }
            }
        }
        if(idx < cur && i != idx && abs(tt[idx] + t[i]) < abs(a+b+c)){
            for(int j=0; j<N; j++){
                if(j != i && binary_search(t,t+N, tt[idx]-t[j])){
                    int ix = lower_bound(t,t+N, tt[idx]-t[j]) - (t);
                    if(i != ix && ix != j){
                        a = t[i];
                        b = t[j];
                        c = t[ix];
                    }
                }
            }
        }
        if(idx-1>= 0 && i != idx-1 && abs(tt[idx-1] + t[i]) < abs(a+b+c)){
            for(int j=0; j<N; j++){
                if(j != i && binary_search(t,t+N, tt[idx-1]-t[j])){
                    int ix = lower_bound(t,t+N, tt[idx-1]-t[j]) - (t);
                    if(i != ix && ix != j){
                        a = t[i];
                        b = t[j];
                        c = t[ix];
                    }
                }
            }
        }
    }
    if(b > c) swap(b,c);
    if(a > b) swap(a,b);
    if(a > c) swap(a,c);
    if(b > c) swap(b,c);
    if(a > b) swap(a,b);
    if(a > c) swap(a,c);
    cout << a << " " << b << " " << c;

    return 0;
}

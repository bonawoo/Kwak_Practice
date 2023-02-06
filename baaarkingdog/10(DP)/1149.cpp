#include <bits/stdc++.h>

using namespace std;
int N;
int R[1005];
int G[1005];
int B[1005];

int d[1005][4]; //r=0, g=1, b=2;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> R[i] >> G[i] >> B[i];
    }
    int r_tot=0;
    int g_tot=0;
    int b_tot=0;
    d[1][0] = R[1];
    d[1][1] = G[1];
    d[1][2] = B[1];
    for(int i=2; i<=N; i++){
        d[i][0] = min(d[i-1][1], d[i-1][2]) + R[i];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + G[i];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + B[i];
    }
    cout << min({d[N][0], d[N][1], d[N][2]});
    return 0;

}
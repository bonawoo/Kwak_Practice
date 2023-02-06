#include <bits/stdc++.h>

using namespace std;
int N;
int D[310][3];
int u[310];
int stair[310];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int total = 0;
    for(int i=1; i<=N; i++){
        cin >> stair[i];
        total += stair[i];
    }
    //2차원 배열(밟는 계단)
    //D[1][1] = stair[1];
    //D[2][1] = stair[2];
    //D[2][2] = stair[1]+stair[2];
    //for(int i=3; i<=N; i++){
    //    D[i][1] = max(D[i-2][1], D[i-2][2]) + stair[i];
    //    D[i][2] = D[i-1][1] + stair[i];
    //}
    //cout << max(D[N][1], D[N][2]);

    //1차원 배열(밟지 않는 계단)
    u[1] = stair[1];
    u[2] = stair[2];
    u[3] = stair[3];
    for(int i=4; i<=N+1; i++){
        u[i] = min(u[i-2], u[i-3]) + stair[i];
    }
    cout << total - u[N+1];
    return 0;

}
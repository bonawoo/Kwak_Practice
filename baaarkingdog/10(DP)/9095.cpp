#include <bits/stdc++.h>

using namespace std;
int N;
int D[1000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c;
    cin >> c;
    D[1] = 1;
    D[2] = 2;
    D[3] = 4;
    for(int k=0; k<c; k++){
        cin >> N;
        for(int i=4; i<=N; i++){
            D[i] = D[i-1] + D[i-2] + D[i-3];
        }
        cout << D[N] << "\n";
    }
    return 0;

}
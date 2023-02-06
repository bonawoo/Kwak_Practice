#include <bits/stdc++.h>

using namespace std;
int N,M;
int num1, num2;
int d[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        int x;
        cin >> x;
        d[i] = d[i-1] + x;
    }
    for(int i=0; i<M; i++){
        cin >> num1 >> num2;
        cout << d[num2] - d[num1-1] << "\n";
    }
    return 0;

}
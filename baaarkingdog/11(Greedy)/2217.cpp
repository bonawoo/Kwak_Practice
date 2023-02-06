#include <bits/stdc++.h>

using namespace std;
int N;
int rope[100002];

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> rope[i];
    }
    sort(rope, rope+N);
    int mx = 0;
    for(int i=0; i<N; i++){
        mx = max(mx, rope[i] * (N-i));
    }
    cout << mx;
    return 0;

}
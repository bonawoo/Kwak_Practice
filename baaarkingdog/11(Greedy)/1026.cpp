#include <bits/stdc++.h>

using namespace std;
int N;
int a[55];
int b[55];
bool cmp(int a, int b){
    return a > b;
}
int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<N; i++){
        cin >> b[i];
    }
    sort(a, a+N);
    sort(b, b+N, cmp);
    int ans = 0;
    for(int i=0; i<N; i++){
        ans += a[i]*b[i];
    }
    cout << ans;
    return 0;
}
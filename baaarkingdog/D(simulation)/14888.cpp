#include <bits/stdc++.h>

using namespace std;

int N;
int number[110];
int cal[5]; //0:+, 1:-, 2:*, 3:/
int mx = -1000000000;
int mn = 1000000000;
void func(int cur, int tot){
    if(cur == N){
        mx = max(tot,mx);
        mn = min(tot,mn);
        return;
    }
    for(int i=0; i<4; i++){
        if(cal[i]){
            cal[i] -= 1;
            if(i == 0) func(cur+1, tot+number[cur]);
            if(i == 1) func(cur+1, tot-number[cur]);
            if(i == 2) func(cur+1, tot*number[cur]);
            if(i == 3) func(cur+1, tot/number[cur]);
            cal[i] += 1;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++) cin >> number[i];
    for(int i=0; i<4; i++) cin >> cal[i];
    func(1,number[0]);
    cout << mx << "\n" << mn;
    return 0;
}
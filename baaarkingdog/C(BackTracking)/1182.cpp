#include <bits/stdc++.h>

using namespace std;

int N,S;
int cnt=0;
int arr[21]; // 수열

void func(int cur, int tot){
    if(cur == N){
        if(tot == S){
            cnt++;
        }
        return;
    }
    func(cur+1, tot);
    func(cur+1, tot+arr[cur]);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    func(0,0);
    if(S == 0) cnt--;
    cout << cnt;
    return 0;
}
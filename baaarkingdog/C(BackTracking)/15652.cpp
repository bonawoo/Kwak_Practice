#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[10]; // 수열
bool isused[10];

void func(int k){
    if(k == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1; i<=n; i++){
        arr[k] = i;
        if(k > 0 && arr[k] < arr[k-1]){
            
        }else{
            func(k+1);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> n >> m;
    func(0);
    return 0;
}
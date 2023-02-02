#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[10]; // 수열
int new_arr[10];
bool isused[10];

void func(int k){
    if(k == m){
        for(int i=0; i<m; i++){
            cout << new_arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int tmp = 0;
    for(int i=0; i<n; i++){
        if(tmp != arr[i]){
            new_arr[k] = arr[i];
            tmp = arr[i];
            func(k+1);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    func(0);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[50];
int new_arr[50];
bool isused[50];

void func(int k){
    if(k == 6){
        for(int i=0; i<6; i++){
            cout << new_arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<n; i++){
        if(k > 0 && new_arr[k-1] > arr[i]){

        }else if(!isused[i]){
            new_arr[k] = arr[i];
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        cin >> n;
        if(n == 0) break;
        else{
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }
            func(0);
            cout << "\n";
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n;
    int total;
    int total_cnt = 0;
    cin >> n >> total;
    int coin_arr[n] = {};
    for(int i = 0; i<n; i++){
        cin >> coin_arr[i];
    }
    for(int j=0; j<n; j++){
        if(total == 0){
            break;
        }
        if(total / coin_arr[n-j-1] > 0){
            total_cnt += total / coin_arr[n-j-1];
            total = total % coin_arr[n-j-1];
        }
    }
    cout << total_cnt;
    return 0;
}
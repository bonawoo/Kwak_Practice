#include <iostream>

using namespace std;

const int coin = 4;
const int MAX = 50000;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int coin_arr[coin][MAX] = {0,};
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] / 25 > 0){
            coin_arr[0][i] = arr[i] / 25;
            arr[i] = arr[i] % 25;
        }
        if(arr[i] / 10 > 0){
            coin_arr[1][i] = arr[i] / 10;
            arr[i] = arr[i] % 10;
        }
        if(arr[i] / 5 > 0){
            coin_arr[2][i] = arr[i] / 5;
            arr[i] = arr[i] % 5;
        }
        if(arr[i] / 1 > 0){
            coin_arr[3][i] = arr[i] / 1;
        }
    }
    for(int i=0; i<n; i++){
        cout << coin_arr[0][i] << " " << coin_arr[1][i] << " " << coin_arr[2][i] << " " << coin_arr[3][i] << endl;
    }
    return 0;
}
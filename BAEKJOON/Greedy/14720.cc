#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;
int main(){
    int n;
    cin >> n;
    int arr[MAX_SIZE];
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int j=0; j<n; j++){
        for(int i=j; i<n; i++){
            if(arr[i] == 0){
                cnt += 1;
                break;
            }else{
                arr[i] = -1;
            }
        }
        for(int i=j; i<n; i++){
            if(arr[i] == 1){
                cnt += 1;
                break;
            }else{
                arr[i] = -1;
            }
        }
        for(int i=j; i<n; i++){
            if(arr[i] == 2){
                cnt += 1;
                break;
            }else{
                arr[i] = -1;
            }
        }
    }
    cout << cnt;
    return 0;
}
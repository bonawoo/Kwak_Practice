#include <iostream>
using namespace std;

const int MAX_SIZE = 30000;
int main(){
    int n;
    cin >> n;
    int arr[MAX_SIZE];
    int max = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cnt = 0;
        for(int j=i; j<n; j++){
            if(arr[i] > arr[j]){
                cnt += 1;
            }else if(arr[i] < arr[j]){
                break;
            }
        }
        if(max < cnt){
            max = cnt;
        }
    }
    cout << max;
    return 0;
}
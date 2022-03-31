#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int total_time = 0;
    int time = 0;
    for(int j=0; j<n; j++){
        for(int k=j; k<n; k++){
            if(arr[j] > arr[k]){
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(int a=0; a<n; a++){
        time += arr[a];
        total_time += time;
    }
    cout << total_time;
    
    return 0;
    
}
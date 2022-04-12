#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int n;
    int total = 0;
    cin >> n;
    int arr_A[n] = {};
    int arr_B[n] = {};
    
    for(int i=0;i<n;i++){
        cin >> arr_A[i];
    }
    for(int i=0;i<n;i++){
        cin >> arr_B[i];
    }
    sort(arr_A, arr_A+n);
    sort(arr_B, arr_B+n, compare);
    
    
    for(int j=0;j<n;j++){
        total += arr_A[j] * arr_B[j];
    }
    cout << total;
    return 0;
}
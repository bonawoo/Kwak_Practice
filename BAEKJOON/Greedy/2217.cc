#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int total = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int j=0; j<n; j++){
        if((n-j) * arr[j] > total){
            total = (n-j) * arr[j];
        }
    }
    cout << total;
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int cnt[23] = {};
    for(int i=0; i<n;i++){
        cin >> arr[i];
        cnt[arr[i]-1] += 1;
    }
    for(int j=0; j<23;j++){
        cout << cnt[j] << " ";
    }
    return 0;
}

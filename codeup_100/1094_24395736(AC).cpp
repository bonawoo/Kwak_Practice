#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;
    int arr[input];
    for(int j=0;j<input;j++){
        cin >> arr[j];
    }
    for(int i = input-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}

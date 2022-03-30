#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[20][20] = {};
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[x-1][y-1] = 1;
    }
    for(int j=0;j<19;j++){
        for(int k=0;k<19;k++){
            cout << arr[j][k] << " ";
        }
        cout << "\n";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int arr[10][10] = {};
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> arr[i][j];
        }
    }
    int x=2;
    int y=2;
    int down, right = 0;
    while(1){
        if(arr[x-1+down][y-1+right] != 2){
            arr[x-1+down][y-1+right] = 9;
            if(arr[x-1+down][y+right] == 1 && arr[x+down][y-1+right] != 1){
                down = down + 1;
            }else if(arr[x-1+down][y+right] == 0){
                right = right + 1;
            }else if(arr[x-1+down][y+right] == 2){
                arr[x-1+down][y+right] = 9;
                break;
            }else{
                break;
            }
        }else{
            arr[x-1+down][y-1+right] = 9;
            break;
        }
    }
    for(int a=0; a<10; a++){
        for(int b=0; b<10; b++){
            cout << arr[a][b] << " ";
        }
        cout << "\n";
    }
    return 0;
}

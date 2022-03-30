#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[20][20] = {};
    for(int j=0;j<19;j++){
        for(int k=0;k<19;k++){
            cin >> arr[j][k];
        }
    }
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        for(int a=0;a<19;a++){
            if(arr[x-1][a] == 0){
                arr[x-1][a] =1;
            }else{
                arr[x-1][a] =0;
            }
        }
        for(int b=0;b<19;b++){
            if(arr[b][y-1] == 0){
                arr[b][y-1] =1;
            }else{
                arr[b][y-1] =0;
            }
        }
    }
    for(int c=0;c<19;c++){
        for(int d=0;d<19;d++){
            cout << arr[c][d] << " ";
        }
        cout << "\n";
    }
    return 0;
}

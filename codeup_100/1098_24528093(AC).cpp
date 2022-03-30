#include <iostream>

using namespace std;

int main(){
    int w,h,n;
    cin >> w >> h;
    cin >> n;
    int l[n] = {};
    int d[n] = {};
    int x[n] = {};
    int y[n] = {};
    for(int i =0;i<n;i++){
        cin >> l[i] >> d[i] >> x[i] >> y[i];
    }
    int arr[w][h] = {};
    for(int j=0; j<n; j++){
        if(d[j] == 0){
            for(int c=0;c<l[j];c++){
                arr[x[j]-1][y[j]+c-1] = 1;
            }
        }else{
            for(int d=0;d<l[j];d++){
                arr[x[j]+d-1][y[j]-1] = 1;
            }
        }
    }
    for(int a=0; a<w; a++){
        for(int b=0; b<h; b++){
            cout << arr[a][b] << " ";
        }
        cout << "\n";
    }
    return 0;
}

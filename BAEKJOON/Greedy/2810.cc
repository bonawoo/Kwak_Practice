#include <iostream>
#include <string>
using namespace std;


int main(){
    int n;
    cin >> n;
    string chair;
    int cnt_L = 0;
    cin >> chair;
    for(int i = 0 ; i<n; i++){
        if(chair[i] == 'L'){
            cnt_L += 1;
        }
    }
    if(cnt_L == 0){
        cout << n;
    }else{
        cout << n  - ((cnt_L / 2 ) - 1);
    }
    return 0;
}
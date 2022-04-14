#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = -1;
    if(n % 3 == 0){
        cnt = n / 3;
    }
    for(int i=1; i<=(n/5);i++){
        if((n-5*i) % 3 == 0){
            cnt = i + (n-5*i) / 3;
        }
    }
    
    cout << cnt;
    return 0;
}
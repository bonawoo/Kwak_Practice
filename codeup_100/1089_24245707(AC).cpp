#include <iostream>

using namespace std;

int main(){
    int a,d,n;
    cin >> a >> d >> n;
    while(n-1){
        a += d;
        --n;
    }
    cout << a;
    return 0;
}

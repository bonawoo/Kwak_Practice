#include <iostream>

using namespace std;

int main(){
    long long int a,m,d,n;
    cin >> a >> m >> d >> n;
    while(n-1){
        a = a*m + d;
        n--;
    }
    cout << a;
    return 0;
}

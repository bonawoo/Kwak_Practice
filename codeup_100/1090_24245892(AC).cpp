#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,r,n;
    cin >> a >> r >> n;
    cout.precision(20);
    cout << a*pow(r,n-1);
    return 0;
}

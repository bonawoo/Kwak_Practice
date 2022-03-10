#include <iostream>

using namespace std;

int main(){
    long long int a,b,c;
    cin >> a >> b >> c;
    cout << ((a > b? b:a) > (b > c? c:b)? (b > c? c:b) : (a > b? b:a));
    return 0;
}

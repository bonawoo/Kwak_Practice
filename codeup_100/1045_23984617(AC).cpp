#include <iostream>

using namespace std;

int main(){
    long long int a,b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << fixed;
    cout.precision(2);
    cout.fill('0');
    cout << float(a) / float(b) << endl;
    return 0;
}

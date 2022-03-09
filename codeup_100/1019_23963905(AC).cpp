#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int y, m, d;
    char d1, d2;
    cin >> y >> d1 >> m >> d2 >> d;
    cout.width(4);
    cout.fill('0');
    cout << y;
    cout.width(1);
    cout.fill('0');
    cout << d2;
    cout.width(2);
    cout.fill('0');
    cout << m;
    cout.width(1);
    cout.fill('0');
    cout << d2;
    cout.width(2);
    cout.fill('0');
    cout << d;
    
    return 0;
    
}

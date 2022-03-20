#include <iostream>

using namespace std;

int main(){
    int h,b,c,s;
    cin >> h >> b >> c >> s;
    double total;
    total = (float)h*b*c*s / (8*1024*1024);
    cout << fixed;
    cout.precision(1);
    cout << total << " MB";
    return 0;
}

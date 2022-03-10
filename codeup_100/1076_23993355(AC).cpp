#include <iostream>

using namespace std;

int main(){
    char a;
    char i = 'a';
    cin >> a;
    while(int(a) - int(i)){
        cout << i << " ";
        i++;
    }
    cout << a;
    return 0;
}

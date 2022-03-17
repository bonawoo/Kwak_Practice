#include <iostream>

using namespace std;

int main(){
    int input;
    hex(cin);
    cin >> input;
    for(int i=1; i<16; i++){
        cout << hex << uppercase << input << "*" << i << "=" << input*i << endl;
    }
    return 0;
}

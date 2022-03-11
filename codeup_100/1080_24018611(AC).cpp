#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;
    int total = 0;
    int i = 0;
    while(total < input){
        ++i;
        total += i;
    }
    cout << (i);
    return 0;
}

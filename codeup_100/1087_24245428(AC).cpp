#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;
    int total = 0;
    int i=1;
    while(total < input){
        total += i;
        i++;
    }
    cout << total;
    return 0;
}

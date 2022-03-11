#include <iostream>

using namespace std;

int main(){
    int input;
    int sum = 0;
    cin >> input;
    for(int i=0;i <= input; i++){
        if((i%2) != 1){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}

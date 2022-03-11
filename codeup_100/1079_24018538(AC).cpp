#include <iostream>

using namespace std;

int main(){
    char input[200];
    int i=0;
    while(input[i] != 'q'){
        cin >> input;
        cout << input[i] << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    char str[21];
    cin >> str;
    int i = 0;
    while(str[i]){
        cout << "'" << str[i] << "'" << endl;
        i++;
    }
    return 0;
}

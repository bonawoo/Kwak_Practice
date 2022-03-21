#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int i=1;
    while(true){
        if((i % a == 0) && (i % b == 0) && (i % c == 0)){
            break;
        }
        i++;
    }
    cout << i;
    return 0;
}

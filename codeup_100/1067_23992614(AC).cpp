#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    if(a > 0){
        cout << "plus" << endl;
    }else{
        cout << "minus" << endl;
    }
    if((a % 2) != 1 && (a % 2) != -1){
        cout << "even" << endl;
    }else{
        cout << "odd" << endl;
    }
    
    return 0;
}

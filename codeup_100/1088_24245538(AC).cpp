#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;
    for(int i =1; i<=input;i++){
        if(i % 3){
            cout << i << " ";
        }
    }
    
    return 0;
}

#include <iostream>
#include<cmath>

using namespace std;

int main(){
    int input;
    cin >> input;
    for(int i=4;i>=0;i--){
        int cal = 0;
        cal = (input / pow(10,i));
        cout << "[" << cal * pow(10,i)  << "]" << endl;
        input -= cal * pow(10,i);
    }
    return 0;
}

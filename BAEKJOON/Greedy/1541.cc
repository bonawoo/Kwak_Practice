#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string input;
    cin >> input;
    int del = 0;
    int temp = 0;
    int n = input.size();
    int stop = n-1;
    for(int i=n-1; i>-1; i--){
        if(input[i] == '+' || i == 0 ){
            for(int j=i; j<stop; j++){
                temp += (input[j+1]-48)*pow(10, stop-j-1);
            }
            if(i == 0){
                temp += (input[0]-48)*pow(10, stop);
            }
            stop = i-1;
        }else if(input[i] == '-'){
            for(int j=i; j<stop; j++){
                del += (input[j+1]-48)*pow(10, stop-1-j);
            }
            del += temp;
            stop = i-1;
            temp = 0;
        }
    }
    cout << temp-del;
    return 0;
    
}
﻿#include <iostream>

using namespace std;

int main(){
    int front, back;
    char d;
    
    cin >> front >> d >> back;
    cout.width(6);
    cout.fill('0');
    cout << front;
    cout.width(7);
    cout.fill('0');
    cout << back;
    
    return 0;
}

﻿#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m[n];
    for(int i=0; i<n;i++){
        cin >> m[i];
    }
    for(int i=0; i<n;i++){
        cout << m[i] << endl;
    }
    return 0;
}

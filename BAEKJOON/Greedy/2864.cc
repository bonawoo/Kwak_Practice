#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    string a_min, b_min, a_max, b_max;
    a_min = a;
    a_max = a;
    b_min = b;
    b_max = b;
    for(int i=0; i<a.length(); i++){
        if(a[i] == '6'){
            a_min[i] = '5';
        }
        if(a[i] == '5'){
            a_max[i] = '6';
        }
    }
    for(int i=0; i<b.length(); i++){
        if(b[i] == '6'){
            b_min[i] = '5';
        }
        if(b[i] == '5'){
            b_max[i] = '6';
        }
    }
    cout << stoi(a_min) + stoi(b_min) << " " <<  stoi(a_max) + stoi(b_max);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    for(int i=0; i<3; i++){
        cin >> A >> B >> C >> D;
        if(A + B + C + D == 4){
            cout << "E" << "\n";
        }else if(A + B + C + D == 3){
            cout << "A" << "\n";
        }else if(A + B + C + D == 2){
            cout << "B" << "\n";
        }else if(A + B + C + D == 1){
            cout << "C" << "\n";
        }else if(A + B + C + D == 0){
            cout << "D" << "\n";
        }
    }
    return 0;
}
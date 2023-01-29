#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string star = "";
    for(int i=0; i<N; i++){
        for(int j=0; j<N+i; j++){
            if(j < (N-i-1)){
                cout << " ";
            }else{
                cout << "*";
            }
        }
        cout << "\n";
    }
    for(int i=1; i<N; i++){
        for(int j=0; j<N*2-i-1; j++){
            if(j < i){
                cout << " ";
            }else{
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string star = "";
    for(int i=0; i<N; i++){
        star += "*";
        cout << star << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string star = "";
    for(int i=N; i>0; i--){
        star += "*";
    }
    for(int i=N; i>0; i--){
        cout << star << "\n";
        star.pop_back();
    }
    return 0;
}
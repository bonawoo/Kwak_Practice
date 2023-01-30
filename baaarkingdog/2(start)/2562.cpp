#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int max = 0;
    int max_idx = 0;
    for(int i=0; i<9; i++){
        cin >> N;
        if(max < N){
            max = N;
            max_idx = i+1;
        }
    }
    cout << max << "\n" << max_idx;
    return 0;
}
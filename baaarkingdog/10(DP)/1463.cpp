#include <bits/stdc++.h>

using namespace std;
int N;
int D[1000002];

int main(){
    cin >> N;
    D[1] = 0;
    D[2] = 1;
    D[3] = 1;
    for(int i=4; i<=N; i++){
        if(i % 3 == 0 && i % 2 == 0){
            D[i] = min({D[i/3]+1, D[i/2]+1, D[i-1]+1});
        }else if(i % 3 == 0 && i % 2 != 0){
            D[i] = min(D[i/3]+1, D[i-1]+1);
        }else if(i % 3 != 0 && i % 2 == 0){
            D[i] = min(D[i/2]+1, D[i-1]+1);
        }else{
            D[i] = D[i-1]+1;
        }
    }
    cout << D[N];
    return 0;

}
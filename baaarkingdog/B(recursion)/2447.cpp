#include <bits/stdc++.h>

using namespace std;

char star[2187*3 + 1][2187*3 +1];
int N;

void func(int x, int y, int n){
    if(n == 1){
        star[x][y] = '*';
        return;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == 1 && j == 1){
            }else{
                func(x + i*n/3,y + j * n/3,n/3);
            }
        }
    }
}
int main(void) {
    cin >> N;
    func(0,0,N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(star[i][j] == '*') cout << '*';
            else cout << ' ';
        }
        cout << "\n";
    }
    return 0;
}

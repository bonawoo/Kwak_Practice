#include <bits/stdc++.h>

using namespace std;

char star[3072 + 1][3072*2];
int N;

void func(int x, int y, int n){
    if(n == 3){
        star[y][x] = '*';
        star[y+1][x-1] = '*';
        star[y+1][x+1] = '*';
        star[y+2][x-2] = '*';
        star[y+2][x-1] = '*';
        star[y+2][x] = '*';
        star[y+2][x+1] = '*';
        star[y+2][x+2] = '*';
        return;
    }
    func(x,y,n/2);
    func(x-n/2,y+n/2,n/2);
    func(x+n/2,y+n/2,n/2);
}
int main(void) {
    cin >> N;
    func(N-1,0,N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N*2-1; j++){
            //cout << "(" << i << " , " << j <<")";
            if(star[i][j] == '*') cout << '*';
            else cout << ' ';
        }
        cout << "\n";
    }
    return 0;
}

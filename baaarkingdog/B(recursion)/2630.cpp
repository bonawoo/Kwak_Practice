#include <bits/stdc++.h>

using namespace std;

int paper[129][129];
int cnt[2];
int N;

bool check(int x, int y, int n){
    for(int i=x; i<n+x; i++){
        for(int j=y; j<n+y; j++){
            if(paper[x][y] != paper[i][j]) return false;
        }
    }
    return true;
}
void func(int x, int y, int n){
    if(n == 1){
        cnt[paper[x][y]]++;
        return;
    }
    if(check(x,y,n)){
        cnt[paper[x][y]]++;
    }else{
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                func(x+i*n/2,y+j*n/2,n/2);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> paper[i][j];
        }
    }
    func(0,0,N);
    cout << cnt[0] << "\n" << cnt[1];
    return 0;
}
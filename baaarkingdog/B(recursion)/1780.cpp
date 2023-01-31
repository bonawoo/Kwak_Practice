#include <bits/stdc++.h>

using namespace std;
int min_tot, zero_tot, plus_tot = 0;
int min_cnt, zero_cnt, plus_cnt = 0;
int N;
int board[2179][2179];
void func(int n, int x, int y){
    if(n == 1) return;
    min_cnt = 0;
    zero_cnt = 0;
    plus_cnt = 0;
    if(n == 3){
        for(int i=x; i < x + n/3; i++){
            for(int j=y; j < y + n/3; j++){
                if(board[i][j] == -1) min_cnt++;
                else if(board[i][j] == 0) zero_cnt++;
                else plus_cnt++;
            }
        }
    }
    for(int i=x; i < x + n/3; i++){
        for(int j=y; j < y + n/3; j++){
            if(board[i][j] == -1) min_cnt++;
            else if(board[i][j] == 0) zero_cnt++;
            else plus_cnt++;
        }
    }
    if(min_cnt == n){
        min_tot += 1;
        return;
    }else if(zero_cnt == n){
        zero_tot += 1;
        return;
    }else if(plus_cnt == n){
        plus_tot += 1;
        return;
    }else{
        min_tot += min_cnt;
        zero_tot += zero_cnt;
        plus_tot += plus_cnt;
        return;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
        }
    }
    for(int i=0; i<N/3; i++){
        for(int j=0; j<N/3; j++){
            func(N,i*(N/3),j*(N/3));
        }
    }
    cout << min_tot << '\n' << zero_tot << '\n' << plus_tot;
    return 0;
}
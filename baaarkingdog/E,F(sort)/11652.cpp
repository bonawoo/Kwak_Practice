#include <bits/stdc++.h>

using namespace std;

long long board[100002];
int mx= 0;
long long mx_num = 0;
int N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    sort(board, board + N);
    long long cur = board[0];
    int cnt = 1;
    mx_num = cur;
    mx = cnt;
    for(int i=1; i<N; i++){
        if(board[i] == cur) cnt++;
        else{
            if(mx < cnt){
                mx = cnt;
                mx_num = cur;
            }
            cur = board[i];
            cnt = 1;
        }
    }
    if(mx < cnt){
        mx = cnt;
        mx_num = cur;
    }
    cout << mx_num;
    return 0;
}
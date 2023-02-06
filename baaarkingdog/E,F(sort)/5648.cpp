#include <bits/stdc++.h>

using namespace std;


int N;
long long board[1000002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    string str1;
    for(int i=0; i<N; i++){
        cin >> str1;
        string tmp_str = "";
        //reverse 가능
        for(int j=str1.length()-1; j>=0; j--){
            tmp_str += str1[j];
        }
        board[i] = stoll(tmp_str);
    }
    sort(board, board + N);
    for(int i=0; i<N; i++){
        cout << board[i];
        cout << "\n";
    }
    return 0;
}
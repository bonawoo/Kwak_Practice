#include <bits/stdc++.h>

using namespace std;


int N;
string board[20005];
bool cmp(const string& a, const string& b){ //복사X
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    string str1;
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    sort(board, board + N, cmp);
    string tmp_str;
    for(int i=0; i<N-1; i++){
        if(i != 0 && tmp_str == board[i]){
        }else{
            cout << board[i];
            cout << "\n";
            tmp_str = board[i];
        }
    }
    if(tmp_str != board[N-1]) cout << board[N-1];
    return 0;
}
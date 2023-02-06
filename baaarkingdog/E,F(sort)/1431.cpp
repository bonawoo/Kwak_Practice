#include <bits/stdc++.h>

using namespace std;

string board[55];
int N;
bool cmp(const string& a, const string& b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }else{
        int a_tot = 0;
        int b_tot = 0;
        for(auto a_it : a){
            if(a_it > '0' && a_it <= '9'){
                a_tot += a_it - '0';
            }
        }
        for(auto b_it : b){
            if(b_it > '0' && b_it <= '9'){
                b_tot += b_it - '0';
            }
        }
        if(a_tot != b_tot) return a_tot < b_tot;
        else{
            return a < b;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    sort(board, board + N, cmp);
    for(int i=0; i<N; i++){
        for(int j=0; j<board[i].length(); j++){
            cout << board[i][j];
        }
        cout << "\n";
    }
    return 0;
}
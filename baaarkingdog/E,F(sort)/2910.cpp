#include <bits/stdc++.h>

using namespace std;


int N,C;
vector<pair<int,int>> v;
int board[1002];
vector<int> s;
bool cmp(const pair<int,int>& a, const pair<int,int>& b){ //복사X
    if(a.second == b.second){
        int a_idx = -1;
        int b_idx = -1;
        for(int i=0; i<s.size(); i++){
            if(s[i] == a.first) a_idx = i;
            else if(s[i] == b.first) b_idx = i;
            if(a_idx > -1 && b_idx > -1) break;
        }
        return a_idx < b_idx;
    }
    return a.second > b.second;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> C;
    for(int i=0; i<N; i++){
        cin >> board[i];
        if(!s.size()){
            s.push_back(board[i]);
        }else{
            if(s.back() != board[i]) s.push_back(board[i]);
        }
    }
    sort(board, board + N);
    board[N] = C+10;
    int cur = board[0];
    int cnt = 1;    
    for(int i=1; i<N+1; i++){
        if(cur != board[i]){
            v.push_back({cur,cnt});
            cur = board[i];
            cnt = 1;
        }else cnt++;
    }
    sort(v.begin(), v.end(), cmp);
    for(int j=0; j<v.size(); j++){
        for(int k=0; k<v[j].second; k++){
            cout << v[j].first << " ";
        }
    }
    return 0;
}
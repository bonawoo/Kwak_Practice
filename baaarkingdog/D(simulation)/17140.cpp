#include <bits/stdc++.h>

using namespace std;
int r,c,k;

int rowcnt = 3;
int colcnt = 3;
int cnt = 0;
int board[110][110];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c >> k;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cin >> board[i][j];
        }
    }
    while(cnt <= 100){
        if(board[r][c] == k){
            cout << cnt;
            return 0;
        }

        if(rowcnt >= colcnt){
            //행 연산
            for(int i=1; i<=rowcnt; i++){
                map<int,int> m;
                for(int j=1; j<=colcnt; j++){
                    if(board[i][j]){
                        m[board[i][j]]++;
                    }
                }
                vector<pair<int,int>> v;
                for(auto it : m){
                    v.push_back({it.second, it.first});
                }
                sort(v.begin(), v.end());
                int cur = 1;
                for(auto it : v){
                    board[i][cur] = it.second;
                    board[i][cur+1] = it.first;
                    cur += 2;
                }
                for(int j=v.size()*2+1; j<=colcnt; j++){
                    board[i][j] = 0;
                    board[i][j+1] = 0;
                }
                int size = v.size();
                colcnt = max(colcnt, size*2);
            }
        }else{
            //열 연산
            for(int i=1; i<=colcnt; i++){
                map<int,int> m;
                for(int j=1; j<=rowcnt; j++){
                    if(board[j][i]){
                        m[board[j][i]]++;
                    }
                }
                vector<pair<int,int>> v;
                for(auto it : m){
                    v.push_back({it.second, it.first});
                }
                sort(v.begin(), v.end());
                int cur = 1;
                for(auto it : v){
                    board[cur][i] = it.second;
                    board[cur+1][i] = it.first;
                    cur += 2;
                }
                for(int j=v.size()*2+1; j<=rowcnt; j++){
                    board[j][i] = 0;
                    board[j+1][i] = 0;
                }
                int size = v.size();
                rowcnt = max(rowcnt, size*2);
            }

        }
        cnt++;
    }
    cout << -1;
    return 0;
}
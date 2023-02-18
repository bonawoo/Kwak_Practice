#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int vis[100010];
int board[100010];
int T, n;
void go(int i){
    int cur = i;
    while(1){
        vis[cur] = i;
        cur = board[cur];
        if(vis[cur] == i){
            while(vis[cur] != -1){
                vis[cur] = -1;
                cur = board[cur];
            }
            return;
        }else if(vis[cur] != 0 ) return;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for(int tt=0; tt<T; tt++){
        cin >> n;
        int cnt = 0;
        for(int i=1; i<=n; i++){
            cin >> board[i];
            vis[i] = 0;
        }
        for(int i=1; i<=n; i++){
            if(vis[i] == 0) {
                go(i);
            }
        }
        for(int i=1; i<=n; i++){
            if(vis[i] != -1) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int N,K;

int dx[3] = {0,-1,1};
int vis[100010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    if(N == K){
        cout << 0;
        return 0;
    }
    queue<int> Q;
    Q.push(N);
    vis[N] = 1;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0; dir<3; dir++){
            int nx = cur + dx[dir];
            if(dir == 0) nx = cur*2;
            if(nx < 0 || nx > 100000) continue;
            if(vis[nx] > 0) continue;
            if(dir == 0) vis[nx] = vis[cur];
            else vis[nx] = vis[cur]+1;
            if(nx == K){
                cout << vis[nx] -1;
                return 0;
            }
            Q.push(nx);
        }
    }
    return 0;
}
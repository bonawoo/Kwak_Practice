#include <bits/stdc++.h>

using namespace std;

int F,S,G,U,D;
int dist[1000002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> F >> S >> G >> U >> D;

    queue<int> Q;
    Q.push(S);
    dist[S] = 1;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int dir=0;dir<2;dir++){
            int x = 0;
            if(dir == 0) x = cur + U;
            else x = cur - D;
            if(x < 1 || x > F) continue;
            if(dist[x] > 0) continue;
            dist[x] = dist[cur] + 1;
            Q.push(x);
        }
    }
    if(dist[G] == 0) cout << "use the stairs";
    else cout << dist[G] - 1;
    return 0;
}
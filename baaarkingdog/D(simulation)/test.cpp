#include <bits/stdc++.h>

using namespace std;
int n,m,k;
int x,y,z;

vector<tuple<int,int,int>> tree;
int eat[12][12];
int eat2[12][12];

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> eat2[i][j];
            eat[i][j] = 5;
        }
    }
    while(m--){
        cin >> x >> y >> z;
        tree.push_back({x,y,z});
    }
    while(k--){
        vector<tuple<int,int,int>> dead_tree;
        sort(tree.begin(), tree.end());
        //봄
        int sz = tree.size();
        for(int v=0; v < sz; v++){
            //땅에 양분이 없을 경우
            if(eat[get<0>(tree[v])][get<1>(tree[v])] < get<2>(tree[v])){
                dead_tree.push_back({get<0>(tree[v]),get<1>(tree[v]),get<2>(tree[v])});
                tree.erase(tree.begin()+v);
                v--;
                sz--;
            }else{
                eat[get<0>(tree[v])][get<1>(tree[v])] -= get<2>(tree[v]);
                tree.push_back({get<0>(tree[v]),get<1>(tree[v]),get<2>(tree[v])+1});
                tree.erase(tree.begin()+v);
                v--;
                sz--;
            }
        }

        //여름
        for(auto it : dead_tree){
            eat[get<0>(it)][get<1>(it)] += get<2>(it) / 2;
        }

        //가을
        sz = tree.size();
        for(int v=0; v < sz; v++){
            //5의 배수일 경우
            if(get<2>(tree[v]) % 5 == 0){
                for(int dir=0; dir<8; dir++){
                    int nx = get<0>(tree[v]) + dx[dir];
                    int ny = get<1>(tree[v]) + dy[dir];
                    if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
                    tree.push_back({nx,ny,1});
                }
            }
        }

        //겨울
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                eat[i][j] += eat2[i][j];
            }
        }
    }
    cout << tree.size();
    return 0;
}
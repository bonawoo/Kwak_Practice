#include <bits/stdc++.h>

using namespace std;
int n,m,k;
int x,y,z;

int tree[12][12][1011];
int sub_tree[12][12][1012];
int dead_tree[12][12];
int eat[12][12];
int eat2[12][12];

int dx[8] = {-1,-1,0,1,1,1,0,-1};
int dy[8] = {0,1,1,1,0,-1,-1,-1};
int cnt = 0;
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
        tree[x][y][z]++;
        //최고 나이를 배열 0 값에 저장
        tree[x][y][0] = max(tree[x][y][0], z);
    }
    while(k--){
        //봄
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                //저장된 최고 나이까지 반복
                for(int z=1; z<=tree[i][j][0]; z++){
                    //나무 존재
                    while(tree[i][j][z]){
                        //양분 먹을 수 없는 경우 죽음
                        if(eat[i][j] < z){
                            dead_tree[i][j] += z / 2;
                        }else{ //양분을 먹을 수 있는 경우
                            //저장트리에 저장
                            sub_tree[i][j][z+1]++;
                            sub_tree[i][j][0] = z+1;
                            eat[i][j] -= z;
                        }
                        tree[i][j][z]--;
                    }
                }
                //저장트리 배열 0에 저장된 최대 나이까지 반복
                for(int z=1; z<=sub_tree[i][j][0]; z++){
                    tree[i][j][z] += sub_tree[i][j][z];
                    //더한 후 초기화
                    sub_tree[i][j][z] = 0;
                }
                tree[i][j][0] = max(tree[i][j][0], sub_tree[i][j][0]);
                sub_tree[i][j][0] = 0;
            }
        }
        //여름
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                eat[i][j] += dead_tree[i][j];
                dead_tree[i][j] = 0;
            }
        }

        //가을
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                for(int z=5; z<=10; z += 5){
                    //나무 존재
                    if(tree[i][j][z]){
                        int tmp =  tree[i][j][z];
                        while(tmp--){
                            for(int dir=0; dir<8; dir++){
                                int nx = i + dx[dir];
                                int ny = j + dy[dir];
                                if(nx < 1 || nx > n || ny < 1 || ny > n) continue;
                                tree[nx][ny][1]++;
                            }
                        }
                    }
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
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int z=1; z<=10; z++){
                cnt += tree[i][j][z];
            }
        }
    }

    cout << cnt;
    return 0;
}
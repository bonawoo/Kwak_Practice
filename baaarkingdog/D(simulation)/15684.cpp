#include <bits/stdc++.h>

using namespace std;

int N,M,H;
int line[40][31][11];
int lineplus[40][40];
int plusline = 1000;
bool check(){
    //사다리 타기
    for(int j=1; j<=N; j++){
        int now = j;
        for(int i=1; i<=H; i++){
            if(line[i][now][now+1] == 1){
                now++;
            }else if(line[i][now-1][now] == 1){
                now--;
            }
        }
        if(now != j) return false;
    }
    return true;
}
void func(int y, int x,int cur){
    if(cur > 3){
        return;
    }
    if(check()){
        plusline = min(plusline,cur);
        return;
    }
    for(int b=y; b<=H; b++){
        for(int i=x; i<N; i++){
            if(line[b][i][i+1] != 0 && line[b][i+1][i+2] != 0){
                i += 2;
            }
            if(line[b][i][i+1] != 0){
                i++;
            }
            if(line[b][i][i+1] == 0 && line[b][i-1][i] == 0  && line[b][i+1][i+2] == 0){
                line[b][i][i+1] = 1;
                func(b,i,cur+1);
                line[b][i][i+1] = 0;
            }
        }
        x=1;
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> H;
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        line[a][b][b+1] = 1;
    }
    if(check()){
        cout << 0;
        return 0;
    }
    if(M <= (N-1)*H) func(1,1,0);
    if(plusline != 1000) cout << plusline;
    else cout << -1;
    return 0;
}
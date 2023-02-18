#include <bits/stdc++.h>

using namespace std;

int n;

int board[52][10];
int mx = 0;
int isused[10];
int tasun[10];
int base[8];

void point(){
    int po = 0;
    int cur = 0;
    for(int i=0; i<n; i++){
        int out_cnt = 0;
        while(out_cnt < 3){
            if(cur >= 9) cur -= 9;
            if(board[i][tasun[cur]] == 0){
                out_cnt++;
                if(out_cnt == 3){
                    cur++;
                    //잔루 제거
                    for(int b=0; b<8; b++) base[b] = 0;
                    break;
                }
            }else{
                //진루
                for(int b=3; b>=0; b--){
                    if(base[b] == 1){
                        base[b+board[i][tasun[cur]]] = 1;
                        base[b] = 0;
                    }
                }
                //타자
                base[board[i][tasun[cur]]] = 1;
                
                //점수 계산
                for(int b=4; b<8; b++){
                    if(base[b] == 1){
                        po++;
                        base[b] = 0;
                    }
                }

            }
            cur++;

        }
    }
    mx = max(mx,po);
}

void brute(int cur){
    if(cur == 9){
        point();
        return;
    }
    if(cur == 3){
        tasun[3] = 0;
        brute(cur+1);
    }
    for(int i=0; i<9; i++){
        if(!isused[i]){
            isused[i] = 1;
            tasun[cur] = i;
            brute(cur+1);
            isused[i] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<9; j++){
            cin >> board[i][j];
        }
    }
    isused[0] = 1;
    brute(0);

    cout << mx;
    return 0;
}
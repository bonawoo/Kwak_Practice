#include <bits/stdc++.h>

using namespace std;

int N,M,K;
int board[45][45];
int sticker[45][45];
int rotation[45][45];
int n,m;
int attach_chk = 0;
int check(){
    if(n <= N && m <= M){
        for(int a=0; a<N-n+1; a++){
            for(int b=0; b<M-m+1; b++){ //들어갈 수 있는 자리 반복
                attach_chk = 0;
                for(int i=a; i<n+a; i++){
                    for(int j=b; j<m+b; j++){ //이미 붙여져있는 스티커 있는지 판별
                        //cout << "n:" << n << " a:" << a << ", b:" << b << " - i :"<< i << ", j: " << j << "->" << attach_chk << "\n";
                        if(sticker[i-a][j-b] == 1){
                            if(board[i][j] == 1){ //이미 붙여져있다면
                                attach_chk++;
                                break;
                            }
                        }
                    }
                    if(attach_chk > 0) break;
                }
                if(attach_chk == 0){ // 붙여져있지 않다면
                    for(int i=a; i<n+a; i++){
                        for(int j=b; j<m+b; j++){
                            if(sticker[i-a][j-b] == 1){
                                board[i][j] = 1;
                            }
                        }
                    }
                    return 1; //회전시킬 필요 없음
                }
            }
        }
    }
    return 0; // 회전이 필요함
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for(int k=0; k<K; k++){
        cin >> n >> m;
        //stciker shape save to array
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> sticker[i][j];
            }
        }
        int rotate_chk = check();
        for(int a=0; a<3; a++){
            if(rotate_chk == 0){
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        rotation[j][n-1-i] = sticker[i][j];
                    }
                }
                int tmp = n;
                n = m;
                m = tmp;
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        sticker[i][j] = rotation[i][j];
                    }
                }
                
                rotate_chk = check();
            }
        }

    }
    int answer = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(board[i][j]) answer++;
        }
    }
    cout << answer;
    return 0;
}
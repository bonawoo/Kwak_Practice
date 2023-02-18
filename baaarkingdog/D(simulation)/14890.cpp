#include <bits/stdc++.h>

using namespace std;

int N,L;
int board[110][110];
int vis1[110][110];
int vis2[110][110];
int tot = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> L;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
        }
    }
    //가로
    for(int i=0; i<N; i++){
        int cur = board[i][0];
        for(int j=1; j<N; j++){
            if(board[i][j]+1 == cur){
                //경사로 설치 가능 여부 1
                if(j+L <= N){
                    int low_cnt = 0;
                    for(int a=j; a<j+L;a++){
                        if(board[i][a] != board[i][j]){
                            low_cnt++;
                            break;
                        }
                    }
                    if(low_cnt > 0) break;
                    else{
                        for(int a=j; a<j+L;a++){
                            if(vis1[i][a] == 0){
                                vis1[i][a] = 1;
                            }else{
                                low_cnt++;
                                break;
                            }
                        }
                    }
                    if(low_cnt > 0) break;
                    if(board[i][j+L] > board[i][j]) break;
                    cur = board[i][j];
                }else{
                    break;
                }
            }else if(board[i][j]-1 == cur){
                //경사로 설치 가능 여부 1
                if(j-L >=0){
                    int high_cnt = 0;
                    for(int a=j-1; a>=j-L; a--){
                        if(board[i][a] != board[i][j-1]){
                            high_cnt++;
                            break;
                        }
                    }
                    if(high_cnt > 0) break;
                    else{
                        for(int a=j-1; a>=j-L; a--){
                            if(vis1[i][a] == 0){
                                vis1[i][a] = 1;
                            }else{
                                high_cnt++;
                                break;
                            }
                        }
                    }
                    if(high_cnt > 0) break;
                    if(j-L-1 >=0){
                        if(board[i][j-L-1] > board[i][j-1]) break;
                    }
                    cur = board[i][j];
                }else{
                    break;
                }
            }else if(board[i][j] == cur){

            }else break;
            
            if(j == N-1) tot++;
        }
    }
    //세로
    for(int i=0; i<N; i++){
        int cur = board[0][i];
        for(int j=1; j<N; j++){
            if(board[j][i]+1 == cur){
                //경사로 설치 가능 여부 1
                if(j+L <= N){
                    int low_cnt = 0;
                    for(int a=j; a<j+L;a++){
                        if(board[a][i] != board[j][i]){
                            low_cnt++;
                            break;
                        }
                    }
                    if(low_cnt > 0) break;
                    else{
                        for(int a=j; a<j+L;a++){
                            if(vis2[a][i] == 0){
                                vis2[a][i] = 1;
                            }else{
                                low_cnt++;
                                break;
                            }
                        }
                    }
                    if(low_cnt > 0) break;
                    if(board[j+L][i] > board[j][i]) break;
                    cur = board[j][i];
                }else{
                    break;
                }
            }else if(board[j][i]-1 == cur){
                //cout << i << " ";
                //경사로 설치 가능 여부 1
                if(j-L >=0){
                    int high_cnt = 0;
                    for(int a=j-1; a>=j-L; a--){
                        if(board[a][i] != board[j-1][i]){
                            high_cnt++;
                            break;
                        }
                    }
                    if(high_cnt > 0) break;
                    else{
                        for(int a=j-1; a>=j-L; a--){
                            if(vis2[a][i] == 0){
                                vis2[a][i] = 1;
                            }else{
                                high_cnt++;
                                break;
                            }
                        }
                    }
                    if(high_cnt > 0) break;
                    if(j-L-1 >=0){
                        if(board[j-L-1][i] > board[j-1][i]) break;
                    }
                    cur = board[j][i];
                }else{
                    break;
                }
            }else if(board[j][i] == cur){

            }else break;
            
            if(j == N-1){
                tot++;
                //cout << i;
            }
        }
    }
    cout << tot;
    return 0;
}
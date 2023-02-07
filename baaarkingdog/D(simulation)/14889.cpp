#include <bits/stdc++.h>

using namespace std;

int N;
int point[25][25];
int star[21];
int link[21];
int mn = 10000000;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> point[i][j];
        }
    }
    int order[N];
    for(int i=0; i<N; i++){
        if(i < N/2) order[i] = 0;
        else order[i] = 1;
    }
    do{
        int stidx = 0;
        int liidx = 0;
        int stnum = 0;
        int linum = 0;
        for(int i=0; i<N; i++){
            if(order[i] == 0){
                star[stidx] = i+1;
                stidx++;
            }else{
                link[liidx] = i+1;
                liidx++;
            }
        }
        for(int i=0; i<N/2-1; i++){
            for(int j=i+1; j<N/2; j++){
                stnum += point[star[i]][star[j]] + point[star[j]][star[i]];
            }
        }
        for(int a=0; a<N/2-1; a++){
            for(int b=a+1; b<N/2; b++){
                linum += point[link[a]][link[b]] + point[link[b]][link[a]];
            }
        }
        mn = min(mn, abs(stnum - linum));
    }while(next_permutation(order, order+N));
    cout << mn;
    return 0;
}
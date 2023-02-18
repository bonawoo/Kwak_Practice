#include <bits/stdc++.h>

using namespace std;
int N,K;
int tab[105];
int b[105];
int tot = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    for(int i=0; i<K; i++){
        cin >> b[i];
    }
    int tab_size = 0;
    for(int i=0; i<K; i++){
        if(tab_size == 0){
            tab[0] = b[i];
            tab_size++;
            continue;
        }else if(tab_size < N){
            int same_cnt = 0;
            for(int t=0; t<tab_size; t++){
                if(tab[t] == b[i]) same_cnt++;
            }
            if(same_cnt == 0){
                tab[tab_size] = b[i];
                tab_size++;
                continue;
            }
        }
        int tab_cnt = 0;
        for(int j=0; j<N; j++){
            if(b[i] == tab[j]) tab_cnt++;
        }
        if(tab_cnt != 0){
            continue;
        }else{
            int mx_idx = 0;
            int mx_n = 0;
            for(int n=0; n<N; n++){
                for(int s=i+1; s<K; s++){
                    if(tab[n] == b[s]){
                        if(s > mx_idx){
                            mx_idx = s;
                            mx_n = n;
                        }
                        break;
                    }
                    if(s == K-1){
                        mx_idx = K;
                        mx_n = n;
                    }
                }
            }
            tab[mx_n] = b[i];
            tot++;
        }
    }
    cout << tot;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
#define X first;
#define Y second;

int N;
int s[10];
int w[10];
bool iscracked[10];
int cnt = 0;

void func(int cur){
    if(cur == N){
        int tmp = 0;
        for(int i=0; i<N; i++){
            if(iscracked[i]) tmp++;
        }
        cnt = max(cnt, tmp);
        return;
    }
    for(int i=0; i<N; i++){
        if(i != cur){
            if(!iscracked[cur] && !iscracked[i]){
                s[cur] -= w[i];
                s[i] -= w[cur];
                if(s[cur] <= 0) iscracked[cur] = 1;
                if(s[i] <= 0) iscracked[i] = 1;
                func(cur+1);
                s[cur] += w[i];
                s[i] += w[cur];
                iscracked[cur] = 0;
                iscracked[i] = 0;
            }else func(cur+1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> s[i] >> w[i];
    }
    func(0);
    cout << cnt;
    return 0;
}
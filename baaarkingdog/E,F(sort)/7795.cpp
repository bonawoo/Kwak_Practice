#include <bits/stdc++.h>

using namespace std;


int T,N,M;
int a[20010];
int b[20010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--){
        int ans = 0;
        cin >> N >> M;
        for(int i=0; i<N; i++) cin >> a[i];
        for(int i=0; i<M; i++) cin >> b[i];
        int cnt = 0;
        sort(a, a+N);
        sort(b, b+M);
        int cur = 0;
        for(int i=0; i<N; i++){
            if(cur == M) ans += cur;
            else{
                int tmp = 0;
                for(int j=cur; j<M; j++){
                    if(b[j] < a[i]){
                        tmp++;
                    }else break;

                }
                cur += tmp;
                ans += cur;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
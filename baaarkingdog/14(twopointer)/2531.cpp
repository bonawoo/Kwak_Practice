#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n,d,k,c;
int s[40010];
int chk[3010];
int mx =0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d>> k >> c;
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<k; i++){
        s[n+i] = s[i];
    }
    n += k;
    int en = 0;
    int cupon_cnt = (s[0] == c);
    chk[s[0]] = 1;
    int cur = 1;
    int kind = 1;
    for(int st=0; st<n; st++){
        while(en < n-1 && cur+1 <= k){
            en++;
            if(!chk[s[en]]) kind++;
            chk[s[en]]++;
            if(s[en] == c) cupon_cnt++;
            cur++;
        }
        if(en-st+1 == k) mx = max(mx, kind + (cupon_cnt == 0));
        else  mx = max(mx, kind);
        cur--;
        chk[s[st]]--;
        if(chk[s[st]] == 0) kind--;
        if(s[st] == c) cupon_cnt--;
    }
    cout << mx;
    return 0;
}
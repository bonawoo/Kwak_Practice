#include <bits/stdc++.h>

using namespace std;
int n, k;
int st,en,mid;
int t[100010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++) cin >> t[i];
    sort(t,t+n);
    cin >> k;
    int cnt = 0;
    int num = 0;
    for(int i=0; i<k; i++){
        cin >> num;
        cnt = 0;
        st = 0;
        en = n-1;
        while(st <= en){
            mid = (en + st) / 2;
            if(num < t[mid]){
                en = mid-1;
            }else if(num > t[mid]){
                st = mid+1;
            }else{
                cout << 1 << '\n';
                cnt++;
                break;
            }
        }
        if(!cnt) cout << 0 << '\n';
    }
    //binary_search(a,a+n,num);
    return 0;
}

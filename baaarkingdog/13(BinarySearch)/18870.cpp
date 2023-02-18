#include <bits/stdc++.h>

using namespace std;
int n, k;
int st,en,mid,num;
int same_cnt = 0;
int t[1000010];
int s[1000010];
vector<int> a;
int bn_idx(int target){
    st = 0;
    en = a.size()-1;
    while(st <= en){
        int mid = (st + en) / 2;
        if(target < a[mid]){
            en = mid-1;
        }else if(target > a[mid]){
            st = mid+1;
        }else{
            return mid;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t[i];
        s[i] = t[i];
    }
    sort(t,t+n);
    //a.erase(unique(a.begin(), a,end()), a.end()); // 중복 제거
    a.push_back(t[0]);
    for(int i=1; i<n; i++){
        if(t[i-1] != t[i]) a.push_back(t[i]);
    }
    for(int i=0; i<n; i++){
        cout << bn_idx(s[i]) << " ";
    }
    return 0;
}

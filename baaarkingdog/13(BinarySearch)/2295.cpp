#include <bits/stdc++.h>

using namespace std;
int n, k;
int t[1010];
vector<int> tt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t[i];
    }
    sort(t,t+n);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            tt.push_back(t[i] + t[j]);
        }
    }
    sort(tt.begin(), tt.end());
    for(int i=n-1; i>0; i--){
        for(int j=tt.size()-1; j>0; j--){
            int tar = t[i] + tt[j];
            if(binary_search(t, t+n,tar)){
                cout << tar;
                return 0;
            }
        }
    }
    return 0;
}

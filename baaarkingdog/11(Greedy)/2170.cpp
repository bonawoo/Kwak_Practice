#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int n,x,y ;
long long tot = 0;
vector<pair<int,int>> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    int cur_s = v[0].X;
    int cur_f = v[0].Y;
    if(n == 1){
        cout << cur_f - cur_s;
        return 0;
    }
    for(int i=1; i<v.size(); i++){
        if(cur_f < v[i].X){
            tot += cur_f - cur_s;
            cur_s = v[i].X;
            cur_f = v[i].Y;
            if(i == v.size()-1){
                tot += cur_f - cur_s;
            }
        }else{
            cur_f = max(cur_f,v[i].Y);
            if(i == v.size()-1){
                tot += cur_f - cur_s;
            }
        }
    }
    
    cout << tot;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n,w,L;
vector<int> truck;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> w >> L;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        truck.push_back(tmp);
    }
    int cnt = 1;
    int cur = 0;
    vector<pair<int,int>> v;
    for(int i=0; i<truck.size(); i++){
        if(cur + truck[i] <= L){
            v.push_back({truck[i], 1});
            cur += truck[i];
        }else{
            i--;
        }
        
        for(int j=0; j<v.size(); j++){
            if(v[j].second == w){
                cur -= v[j].first;
                v.erase(v.begin());
            }
            v[j].second++;
        }
        cnt++;
    }
    while(!v.empty()){
        for(int j=0; j<v.size(); j++){
            if(v[j].second == w){
                v.erase(v.begin());
            }
            v[j].second++;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}
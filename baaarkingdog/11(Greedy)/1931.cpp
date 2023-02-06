#include <bits/stdc++.h>

using namespace std;

int N;
int s,f;
vector<pair<int,int>> v;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}
int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> s >> f;
        v.push_back({s,f});
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    int t = 0;
    for(int i=0; i<N; i++){
        if(t > v[i].first) continue;
        t = v[i].second;
        ans++;
    }
    cout << ans;
    return 0;

}
#include <bits/stdc++.h>

using namespace std;

int N, L, K;
vector<pair<int,int>> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> L >> K;
    for(int i=0; i<N; i++){
        int sub1,sub2;
        cin >> sub1 >> sub2;
        v.push_back({sub2,sub1});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(cnt == K) break;
        if(v[i].first <= L){
            ans += 140;
            cnt++;
        }else if(v[i].second <= L){
            ans += 100;
            cnt++;
        }
    }
    cout << ans;
    return 0;
}
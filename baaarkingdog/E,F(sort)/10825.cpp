#include <bits/stdc++.h>

using namespace std;

int N;
vector<tuple<int,int,int,string>> v;
int kp, ep, mp;
string nm;
bool cmp(const tuple<int,int,int,string>&a, const tuple<int,int,int,string>& b){
    if(get<0>(a) != get<0>(b)){
        return get<0>(a) > get<0>(b);
    }else if(get<1>(a) != get<1>(b)){
        return get<1>(a) < get<1>(b);
    }else if(get<2>(a) != get<2>(b)){
        return get<2>(a) > get<2>(b);
    }else return get<3>(a) < get<3>(b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> nm >> kp >> ep >> mp;
        v.push_back({kp,ep,mp,nm});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << get<3>(it) << "\n";
    return 0;
}
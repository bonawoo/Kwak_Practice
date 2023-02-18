#include <bits/stdc++.h>

using namespace std;

string N;
long long tot =0;
int zero_cnt = 0;
vector<int> v;
bool cmp(int a,int b){
    return a > b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(auto nit : N){
        int t = nit - '0';
        v.push_back(t % 10);
        if(t % 10 == 0) zero_cnt++;
        else tot += t % 10;
    }
    sort(v.begin(), v.end(), cmp);
    if(tot % 3 == 0 && zero_cnt > 0){
        for(auto it : v) cout << it;
    }else{
        cout << -1;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int N;
vector<tuple<int,int,string>> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int age;
    string name;

    for(int i=0; i<N; i++){
        cin >> age >> name;
        v.push_back({age,i,name});
    }
    sort(v.begin(), v.end());
    for(int i=0; i<N; i++){
        cout << get<0>(v[i]) << " " << get<2>(v[i]) << "\n";
    }
    return 0;
}
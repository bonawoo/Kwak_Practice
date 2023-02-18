#include <bits/stdc++.h>

using namespace std;
int na, nb;
int a[500010];
int b[500010];
vector<int> ina;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> na >> nb;
    for(int i=0; i<na; i++){
        cin >> a[i];
    }
    for(int i=0; i<nb; i++){
        cin >> b[i];
    }
    sort(a,a+na);
    sort(b,b+nb);
    int cnt = 0;
    for(int i=0; i<na; i++){
        if(!binary_search(b,b+nb,a[i])){
            ina.push_back(a[i]);
        }
    }
    if(ina.size() == 0) cout << 0;
    else{
        cout << ina.size() << '\n';
        for(int i=0; i<ina.size(); i++){
            cout << ina[i] << ' ';
        }
    }
    return 0;
}

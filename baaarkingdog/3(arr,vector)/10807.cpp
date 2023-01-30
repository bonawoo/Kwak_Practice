#include <bits/stdc++.h>

using namespace std;
vector<int> cnt(201);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    cin >> A;
    int answer = 0;
    vector<int> num;
    for(int i=0; i<A; i++){
        cin >> B;
        cnt[B+100]++;
    }
    int C;
    cin >> C;
    cout << cnt[C+100];
    return 0;
}
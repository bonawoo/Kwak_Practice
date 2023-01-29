#include <bits/stdc++.h>

using namespace std;
vector<int> cnt(2000001);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    cin >> A;
    int answer = 0;
    vector<int> num;
    for(int i=0; i<A; i++){
        cin >> B;
        num.push_back(B);
        cnt[B]++;
    }
    int C;
    cin >> C;
    for(auto it : num){
        if(C- it > 0){
            if(cnt[C-it] > 0) answer++;
        }
    }
    cout << answer / 2;
    return 0;
}
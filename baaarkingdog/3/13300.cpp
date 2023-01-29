#include <bits/stdc++.h>

using namespace std;
vector<int> cnt(13);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K,A,B;
    int answer = 0;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> A >> B;
        cnt[A*6 + B]++;
    }
    for(int i=1; i<cnt.size(); i++){
        if(cnt[i] % K == 0){
            answer += cnt[i] / K;
        }else{
            answer += cnt[i] / K + 1;
        }
    }
    cout << answer;
    return 0;
}
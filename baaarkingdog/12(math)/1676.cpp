#include <bits/stdc++.h>

using namespace std;

int N;
int two_cnt = 0;
int five_cnt = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=1; i<=N; i++){
        int tmp = i;
        while(tmp % 2 == 0){
            two_cnt++;
            tmp /= 2;
        }
        tmp = i;
        while(tmp % 5 == 0){
            five_cnt++;
            tmp /= 5;
        }
    }
    cout << min(two_cnt, five_cnt);
    return 0;
}

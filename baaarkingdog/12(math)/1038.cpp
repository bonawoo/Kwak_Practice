#include <bits/stdc++.h>

using namespace std;

int N;

vector<bool> a(10,0);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int cnt = 0;
    for(int i=1; i<=10; i++){
        a[10-i] = 1;
        do{
            if(cnt != N){
                cnt++;
                continue;
            }
            for(int i=0; i<10; i++){
                if(a[i]) cout << 9 - i;
            }
            return 0;
        }while(next_permutation(a.begin(), a.end()));

    }
    cout << -1;
    return 0;
}

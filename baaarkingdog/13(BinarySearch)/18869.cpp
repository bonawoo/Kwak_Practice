#include <bits/stdc++.h>
using namespace std;

int M,N;

int d[102][10005];

int t[10005];
int s[10005];
int tot = 0;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> M >> N;
  for(int i=0; i<M; i++){
    vector<int> a;
    for(int j=0; j<N; j++){
        cin >> t[j];
        a.push_back(t[j]);
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    for(int j=0; j<N; j++){
        d[i][j] = lower_bound(a.begin(), a.end(), t[j]) - a.begin();
    }
  }
  for(int i=0; i<M; i++){
    for(int j=i+1; j<M; j++){
        int cnt = 0;
        for(int k=0; k<N; k++){
            if(d[i][k] == d[j][k]){
                cnt++;
            }else break;
        }
        if(cnt == N) tot++;
    }
  }
  cout << tot;
  return 0;
}

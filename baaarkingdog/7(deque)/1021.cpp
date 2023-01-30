#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    deque<int> DQ;
    for(int i=0; i<N; i++){
        DQ.push_back(i+1);
    }
    int num;
    int tmp;
    int answer = 0;
    for(int j=0; j<M; j++){
        cin >> num;
        int cnt = 0;
        for(int k=0; k<DQ.size(); k++){
            if(DQ.front() == num){
                DQ.pop_front();
                if(cnt > DQ.size()/2){
                    answer += DQ.size() - cnt +1;
                }else answer += cnt;
                break;
            }else{
                tmp = DQ.front();
                DQ.pop_front();
                DQ.push_back(tmp);
                cnt++;
            }
        }
    }
    cout << answer;
    return 0;
}
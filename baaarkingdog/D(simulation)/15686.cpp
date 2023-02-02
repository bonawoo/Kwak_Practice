#include <bits/stdc++.h>

using namespace std;
int N,M,cur, dist;
int board[55][55];
int mn = 100000;

vector<pair<int,int>> chicken;
vector<pair<int,int>> house;

bool isused[15];

int distance(int k){
    dist = 0;
    for(int i=0; i<house.size(); i++){
        int mincur = 1000000;
        for(int j=0; j<chicken.size(); j++){
            if(isused[j]){
                mincur = min(mincur, (abs(house[i].first - chicken[j].first) + abs(house[i].second - chicken[j].second)));
            }
        }
        dist += mincur;
    }
    return dist;
}
//백트래킹
void func(int idx, int k){ //idx를 담아 넣어야 중복된 값을 찾지 않아 시간 초과 안남!
    if(k == M){
        mn = min(mn, distance(k));
        return;
    }
    //int tmp_f = 0;
    //int tmp_s = 0;
    for(int i=idx; i<chicken.size(); i++){ 
        if(!isused[i]){
            //if(k > 0 && (chicken[i].first < tmp_f && chicken[i].second < tmp_s)){

            //}else{
                isused[i] = 1;
            //    tmp_f = chicken[i].first;
            //    tmp_s = chicken[i].second;
                func(i, k+1);
                isused[i] = 0;
            //}
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) house.push_back({i,j});
            if(board[i][j] == 2) chicken.push_back({i,j});
        }
    }

    //vector<int> brute(chicken.size(),1);
    //fill(brute.begin(), brute.begin() + chicken.size() - M, 0);
    //int mn = 100000;
    //do{
    //    int dist = 0;
    //    for(auto h : house){
    //        int tmp = 100000;
    //        for(int i=0; i<chicken.size(); i++){
    //            if(brute[i] == 0) continue;
    //            tmp = min(tmp, abs(chicken[i].first - h.first) + abs(chicken[i].second - h.second));
    //
    //        }
    //        dist += tmp;
    //    }
    //    mn = min(mn, dist);
    //}while(next_permutation(brute.begin(), brute.end()));
    func(0,0);
    cout << mn;
    return 0;
}
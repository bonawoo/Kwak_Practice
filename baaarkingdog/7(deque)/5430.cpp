#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int p;
    string func, str1;
    for(int i=0; i<N; i++){
        deque<int> DQ;
        cin >> func >> p;
        cin >> str1;
        string tmp = "";
        string check_str = "";
        //배열 deque에 저장
        if(p == 0){
        }else{
            for(auto it : str1){
                if(it != '[' && it != ']' && it != ','){
                    tmp += it;
                }else if(it == ','){
                    DQ.push_back(stoi(tmp));
                    tmp = "";
                }else if(it == ']'){
                    DQ.push_back(stoi(tmp));
                    tmp = "";
                    break;
                }
            }
        }
        int R_cnt=0;
        for(auto f_it : func){
            if(f_it == 'R'){
                if(R_cnt == 0) R_cnt++;
                else R_cnt = 0;
            }else{
                if(!DQ.empty()){
                    if(R_cnt == 0){
                        DQ.pop_front();
                    }else{
                        DQ.pop_back();
                    }
                }else{
                    cout << "error" << "\n";
                    check_str = "error";
                    break;
                }
            }
        }
        if(check_str != "error"){
            cout << "[";
            if(!DQ.empty()){
                if(R_cnt == 1){
                    reverse(DQ.begin(), DQ.end());
                }
                while(DQ.size() - 1){
                    cout << DQ.front() << ',';
                    DQ.pop_front();
                }
                cout << DQ.front() << ']' << "\n";
            }else{
                cout << ']' << "\n";
            }
        }

    }
    return 0;
}
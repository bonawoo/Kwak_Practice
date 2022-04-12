#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int coin[6] = {500, 100, 50, 10, 5, 1};
    int total = 1000 - n;
    int cost_cnt = 0;
    
    for(int i=0; i<6; i++){
        if(total / coin[i] > 0){
            cost_cnt += total / coin[i];
            total = total % coin[i];
        }
    }
    
    cout << cost_cnt;
    return 0;
}
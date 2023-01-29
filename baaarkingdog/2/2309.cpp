#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr(9);
    int total = 0;
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            for(int k=0; k<9; k++){
                if(k != i && k != j){
                    total += arr[k];
                }
            }
            if(total == 100){
                for(int k=0; k<9; k++){
                    if(k != i && k != j){
                        cout << arr[k] << "\n";
                    }
                }
                break;
            }else{
                total = 0;
            }
        }
        if(total == 100) break;
    }
    return 0;
}
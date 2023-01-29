#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0; i<10; i++){
        cin >> A >> B;
        //reverse 활용 가능
        if((B+A) % 2 == 0){
            for(int i=A; i<(A+B)/2; i++){
                int tmp = arr[A+B-i-1];
                arr[A+B-i-1] = arr[i-1];
                arr[i-1] = tmp;
            }
        }else{
            for(int i=A; i<(A+B+1)/2; i++){
                int tmp = arr[A+B-i-1];
                arr[A+B-i-1] = arr[i-1];
                arr[i-1] = tmp;
            }
        }
    }
    for(int i=0; i<20; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
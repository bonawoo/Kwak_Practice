#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {1, 52, 48};
    int N = 3;
    int answer = 0;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == 100){
                answer =  1;
            }
        }
    }
    cout << answer << endl;
    
    return 0;
}
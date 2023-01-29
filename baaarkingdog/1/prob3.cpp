#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    int answer = 0;
    cin >> N;
    for(int i=1; i<N; i++){
        if(i*i == N){
            answer = 1;
            break;
        }
        if(i*i > N){
            break;
        }
    }
    cout << answer << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int N;
    int answer = 0;
    cin >> N;
    for(int i=1; i<=N; i *=2){
        answer = i;
    }
    cout << answer << endl;
    
    return 0;
}
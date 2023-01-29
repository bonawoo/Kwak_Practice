#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int answer = 0;
    for(int i=3; i<=N; i +=3){
        answer += i;
    }
    for(int i=5; i<=N; i +=5){
        answer += i;
    }
    for(int i=15; i<=N; i +=15){
        answer -= i;
    }
    cout << answer << endl;
    
    return 0;
}
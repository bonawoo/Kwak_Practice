#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str1;
    cin >> str1;
    int N;
    cin >> N;

    list<char> L;
    for(auto it : str1){
        L.push_back(it);
    }
    list<char>::iterator t = L.end();

    char str2, str3;
    for(int i = 0; i<N; i++){
        cin >> str2;
        if(str2 == 'P') cin >> str3;
        if(str2 == 'L'){
            if(t != L.begin()){
                t--;
            }
        }else if(str2 == 'D'){
            if(t != L.end()){
                t++;
            }
        }else if(str2 == 'B'){
            if(t != L.begin()){
                t--;
                t = L.erase(t);
            }
        }
        else{
            L.insert(t, str3);
        }

    }
    string answer = "";
    for(auto i : L){
        answer += i;
    }
    cout << answer;
    return 0;
}
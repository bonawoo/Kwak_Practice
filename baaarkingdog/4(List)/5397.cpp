#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    string str1;
    for(int i=0; i<N; i++){
        cin >> str1;
        list<char> L;
        string answer = "";
        list<char>::iterator t = L.begin();
        for(auto it : str1){
            if(it == '<'){
                if(t != L.begin()){
                    t--;
                }
            }else if(it == '>'){
                if(t != L.end()){
                    t++;
                }
            }else if(it == '-'){
                if(t != L.begin()){
                    t--;
                    t = L.erase(t);
                }
            }else{
                L.insert(t, it);
            }
        }
        for(auto iter : L){
            answer += iter;
        }
        cout << answer << "\n";
    }
    return 0;
}
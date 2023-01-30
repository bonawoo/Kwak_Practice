#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    vector<int> arr;
    list<int> L;
    for(int i=0; i<N; i++){
        L.push_back(i+1);
    }
    list<int>::iterator t = L.begin();
    t--;
    while(arr.size() < N){
        for(int i=0; i<K; i++){
            t++;
            if(t == L.end()){
                t = L.begin();
            }
        }
        arr.push_back(*t);
        t = L.erase(t);
        t--;
    }
    cout << "<";
    for(int i=0; i<arr.size()-1; i++){
        cout << arr[i] << ", ";
    }
    cout <<arr[arr.size()-1] << ">";
    return 0;
}
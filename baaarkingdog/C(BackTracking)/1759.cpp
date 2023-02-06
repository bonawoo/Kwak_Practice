#include <bits/stdc++.h>

using namespace std;

int L,C;
char arr[20];
string str1 = "";
bool isused[20];

void func(int idx, int ja, int mo, int cur){
    if(cur == L){
        if(ja >= 2 && mo >= 1) cout << str1 << "\n";
        return;
    }
    for(int i=idx; i<C; i++){
        if(!isused[i]){
            isused[i] = 1;
            str1 += arr[i];
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') func(i, ja, mo+1, cur+1);
            else func(i, ja+1, mo, cur+1);
            isused[i] = 0;
            str1.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> L >> C;
    for(int i=0; i<C; i++){
        cin >> arr[i];
    }
    sort(arr, arr+C);
    func(0,0,0,0);
    return 0;
}
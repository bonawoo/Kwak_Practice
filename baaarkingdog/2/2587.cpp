#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int total = 0;
    vector<int> arr(5);
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << total / 5 << "\n" << arr[2];
    return 0;
}
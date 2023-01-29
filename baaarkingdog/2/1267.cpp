#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,A;
    cin >> N;
    int Y_tot = 0;
    int M_tot = 0;
    for(int i=0; i<N; i++){
        cin >> A;
        Y_tot += (A / 30 +1) * 10;
        M_tot += (A / 60 +1) * 15;
    }
    if(Y_tot > M_tot){
        cout << "M" << " " << M_tot;
    }else if(Y_tot < M_tot){
        cout << "Y" << " " << Y_tot;
    }else{
        cout << "Y" << " "  << "M" << " " << Y_tot;
    }
    return 0;
}
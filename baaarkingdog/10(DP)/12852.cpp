#include <bits/stdc++.h>

using namespace std;
int N;

int d[1000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    
    d[1] = 0;
    d[2] = 1;
    d[3] = 1;
    for(int i=4; i<=N; i++){
        if(i % 3 == 0 && i % 2 == 0){
            d[i] = min({d[i/3]+1, d[i/2]+1, d[i-1]+1});
        }else if(i % 3 == 0 && i % 2 != 0){
            d[i] = min(d[i/3]+1, d[i-1]+1);
        }else if(i % 3 != 0 && i % 2 == 0){
            d[i] = min(d[i/2]+1, d[i-1]+1);
        }else{
            d[i] = d[i-1]+1;
        }

    }
    cout << d[N] << "\n";
    int num = N;
    while(num-1){
        cout << num << " ";
        if(num % 3 == 0 && num % 2 == 0){
            if(d[num/3] == d[num]-1){
                num /= 3;
            }else if(d[num/2] == d[num]-1){
                num /= 2;
            }else num -= 1;
        }else if(num % 3 != 0 && num % 2 == 0){
            if(d[num/2] == d[num]-1){
                num /= 2;
            }else num -= 1;
        }else if(num % 2 != 0 && num % 3 == 0){
            if(d[num/3] == d[num]-1){
                num /= 3;
            }else num -= 1;
        }else num -=1;
    }
    cout << 1;
    return 0;

}
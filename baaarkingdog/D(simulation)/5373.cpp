#include <bits/stdc++.h>

using namespace std;

int n,m;
string u[3];
string d[3];
string f[3]; 
string b[3]; 
string l[3]; 
string r[3];
void setting(){
    for(int i=0; i<3; i++){
            u[i] = "www";
            d[i] = "yyy";
            f[i] = "rrr";
            b[i] = "ooo";
            l[i] = "ggg";
            r[i] = "bbb";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        cin >> m;
        string dir;
        setting();
        while(m--){
            cin >> dir;
            //L - front
            if(dir[0] == 'L'){
                if(dir[1] == '-'){
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[i][0];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[i][0] = f[i][0];
                        f[i][0] = d[i][0];
                        d[i][0] = b[2-i][2];
                        b[2-i][2] = tmp[i];
                    }
                    //자기 자신 회전(270도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = l[j][2-i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            l[i][j] = tmp_char[i][j];
                        }
                    }
                }else{
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[i][0];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[i][0] = b[2-i][2];
                        b[2-i][2] = d[i][0];
                        d[i][0] = f[i][0];
                        f[i][0] = tmp[i];
                    }
                    //자기 자신 회전(90도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = l[2-j][i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            l[i][j] = tmp_char[i][j];
                        }
                    }
                }
            }
            //R - front
            if(dir[0] == 'R'){
                if(dir[1] == '-'){
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[i][2];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[i][2] = b[2-i][0];
                        b[2-i][0] = d[i][2];
                        d[i][2] = f[i][2];
                        f[i][2] = tmp[i];
                    }
                    //자기 자신 회전(270도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = r[j][2-i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            r[i][j] = tmp_char[i][j];
                        }
                    }
                }else{
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[i][2];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[i][2] = f[i][2];
                        f[i][2] = d[i][2];
                        d[i][2] = b[2-i][0];
                        b[2-i][0] = tmp[i];
                    }
                    //자기 자신 회전(90도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = r[2-j][i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            r[i][j] = tmp_char[i][j];
                        }
                    }
                }
            }
            //U - front
            if(dir[0] == 'U'){
                if(dir[1] == '-'){
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = f[0][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        f[0][i] = l[0][i];
                        l[0][i] = b[0][i];
                        b[0][i] = r[0][i];
                        r[0][i] = tmp[i];
                    }
                    //자기 자신 회전(270도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = u[j][2-i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            u[i][j] = tmp_char[i][j];
                        }
                    }
                }else{
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = f[0][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        f[0][i] = r[0][i];
                        r[0][i] = b[0][i];
                        b[0][i] = l[0][i];
                        l[0][i] = tmp[i];
                    }
                    //자기 자신 회전(90도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = u[2-j][i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            u[i][j] = tmp_char[i][j];
                        }
                    }
                }
            }
            //D - front
            if(dir[0] == 'D'){
                if(dir[1] == '-'){
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = f[2][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        f[2][i] = r[2][i];
                        r[2][i] = b[2][i];
                        b[2][i] = l[2][i];
                        l[2][i] = tmp[i];
                    }
                    //자기 자신 회전(270도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = d[j][2-i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            d[i][j] = tmp_char[i][j];
                        }
                    }
                }else{
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = f[2][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        f[2][i] = l[2][i];
                        l[2][i] = b[2][i];
                        b[2][i] = r[2][i];
                        r[2][i] = tmp[i];
                    }
                    //자기 자신 회전(90도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = d[2-j][i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            d[i][j] = tmp_char[i][j];
                        }
                    }
                }
            }
            //F - front
            if(dir[0] == 'F'){
                if(dir[1] == '-'){
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[2][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[2][i] = r[i][0];
                        r[i][0] = d[0][2-i];
                        d[0][2-i] = l[2-i][2];
                        l[2-i][2] = tmp[i];
                    }
                    //자기 자신 회전(270도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = f[j][2-i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            f[i][j] = tmp_char[i][j];
                        }
                    }
                }else{
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[2][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[2][i] = l[2-i][2];
                        l[2-i][2] = d[0][2-i];
                        d[0][2-i] = r[i][0];
                        r[i][0] = tmp[i];
                    }
                    //자기 자신 회전(90도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = f[2-j][i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            f[i][j] = tmp_char[i][j];
                        }
                    }
                }
            }
            //B - front
            if(dir[0] == 'B'){
                if(dir[1] == '-'){
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[0][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[0][i] = l[2-i][0];
                        l[2-i][0] = d[2][2-i];
                        d[2][2-i] = r[i][2];
                        r[i][2] = tmp[i];
                    }
                    //자기 자신 회전(270도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = b[j][2-i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            b[i][j] = tmp_char[i][j];
                        }
                    }
                }else{
                    char tmp[3];
                    //돌릴 때 겹치는 값 임시 저장
                    for(int i=0; i<3; i++){
                        tmp[i] = u[0][i];
                    }
                    //돌리기
                    for(int i=0; i<3; i++){
                        u[0][i] = r[i][2];
                        r[i][2] = d[2][2-i];
                        d[2][2-i] = l[2-i][0];
                        l[2-i][0] = tmp[i];
                    }
                    //자기 자신 회전(90도)
                    string tmp_char[3];
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            tmp_char[i][j] = b[2-j][i];
                        }
                    }
                    for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                            b[i][j] = tmp_char[i][j];
                        }
                    }
                }
            }
        }

        //출력
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << u[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
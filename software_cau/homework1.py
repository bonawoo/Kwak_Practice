import random
win = 0
lose = 0
while(win < 2 && lose < 2):
    com = random.randint(1,3)
    user = int(input("가위바위보를 선택하세요 (1. 가위, 2.바위, 3.보) : "))

    if(com == 1){
        com_str = "가위"
    elif(com == 2){
        com_str = "바위"
    else{
        com_str = "보:
    }
    if(user == 1){
        user_str = "가위"
    elif(com == 2){
        user_str = "바위"
    else{
        user_str = "보:
    }
    
    print("당신의 선택은 (%s)입니다," % user_str)
    print("컴퓨터 선택은 (%s)입니다," % com_str)
    

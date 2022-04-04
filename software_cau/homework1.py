import random
win = 0 #승리
lose = 0 #패배
while(win < 3 and lose < 3):
    com = random.randint(1,3)
    user = int(input("가위바위보를 선택하세요 (1. 가위, 2.바위, 3.보) : "))
    print("==========================================")
    if(com == 1) :
        com_str = "가위"
    elif(com == 2) :
        com_str = "바위"
    else :
        com_str = "보"
    
    if(user == 1) :
        user_str = "가위"
    elif(user == 2) :
        user_str = "바위"
    else :
        user_str = "보"
    
    
    print("당신의 선택은 (%s)입니다," % user_str)
    print("컴퓨터 선택은 (%s)입니다," % com_str)

    if(user == 1) :
        if(com == 1) :
            print("비겼습니다! 현재 스코어 %d승 %d패" %(win, lose))
        elif(com == 2) :
            lose +=1
            print("졌습니다! 현재 스코어 %d승 %d패" %(win, lose))
        elif(com == 3) :
            win +=1
            print("이겼습니다! 현재 스코어 %d승 %d패" %(win, lose))
        
    elif(user == 2) :
        if(com == 1) :
            win +=1
            print("이겼습니다! 현재 스코어 %d승 %d패" %(win, lose))
        elif(com == 2) :
            print("비겼습니다! 현재 스코어 %d승 %d패" %(win, lose))
        elif(com == 3) :
            lose +=1
            print("졌습니다! 현재 스코어 %d승 %d패" %(win, lose))
        
    elif(user == 3) :
        if(com == 1) :
            lose +=1
            print("졌습니다! 현재 스코어 %d승 %d패" %(win, lose))
        elif(com == 2) :
            win +=1
            print("이겼습니다! 현재 스코어 %d승 %d패" %(win, lose))
        elif(com == 3) :
            print("비겼습니다! 현재 스코어 %d승 %d패" %(win, lose))
    print("==========================================")
        
    
if(win == 3) :
    print("먼저 3승을 했네요 최종 승리!")
else :
    print("먼저 3패를 했네요 최종 패배!")


#숫자 맞추기 게임
import random
com_num = random.randint(1,100)
i = 1
answer = int(input("제가 생각한 숫자를 맞춰보세요(1~100) : "))
while(answer != com_num):
    if(answer > com_num) :
        print("%d 보다 더 작은 수를 입력하세요 Down! Down!" % answer)
    elif(answer < com_num)  :
        print("%d 보다 더 큰 수를 입력하세요 Up! Up!" % answer)
    answer = int(input("제가 생각한 숫자를 맞춰보세요(1~100) : "))
    i +=1
print("%d ! 정답입니다! %d회 시도하여 맞췄습니다." % (answer, i))

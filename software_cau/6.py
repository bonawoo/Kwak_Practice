#구구단출력하기
num = 1
dan = int(input("몇 단을 출력할까요? "))
while num <10:
    print('%d * %d = %d' %(dan, num, dan*num))
    num += 1

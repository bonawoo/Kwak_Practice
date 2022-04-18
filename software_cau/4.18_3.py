##def isPrimeNumber(number):
##    cnt = 0
##    for i in range(1, number+1,1):
##        if(number % i == 0):
##            cnt +=1
##    if(cnt != 2):
##        return False
##    else :
##        return True

import time

def isPrimeNumber(number):
    if(number < 2) : return False
    for i in range(2, number,1):
        if(number % i == 0):
            print(i)
            return False
    return True

number = int(input("숫자를 입력하세요: "))
start = time.time()
if isPrimeNumber(number) :
    print("%d는 prime number 입니다." % number)
else:
    print("%d는 prime number가 아닙니다." % number)
end = time.time()
print("흐른 시간 : %f" % (end - start))


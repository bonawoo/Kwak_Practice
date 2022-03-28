#초에 입력받고 시간, 분, 초로 환산하기
time = int(input("초단위 시간을 입력하세요 : "))
hour = time // 3600
minute = (time % 3600) // 60
second = (time - 3600*hour - 60*minute)

print("%d초는 환산하면 %d시간 %d분 %d초입니다." % (time, hour, minute, second))

# 대입 연산자(복합 연산자)
# "="이 항상 뒤에 있다!
a = 10; a+=5;  a /=5; # 나누기를 한 시점에서 float형태로 바뀜!
a //= 5; a **= 5; print(a)

# 관계연산자
#
a=100
b=200
print(a==b, a!=b, a>b, a<b, a>=b, a<=b) #boolean type으로 반환(True, False)


print("%15s" % "Hello!") #15자리 공간에 출력
print("%15s" % "Hello world") 
print("%15s" % "안녕하세요, 여러분") # 영어와 한글은 차이가 있음(자리수는 같지만 크기가 다름)
print("%-15s %s" %("Hello", "World")) # 왼쪽 정렬

#서식에서 숫자형 데이터 사용하기
name = "홍길동"
age = 20
print("제 이름은 %s이고, %d세 입니다." %(name, age)) # %d : 10진수 정수(decimal)

print("%d / %d = %d" %(100,200,100/200)) # %d는 정수 표현이 한계 -> %f 사용
print("%d / %d = %f" %(100,200,100/200)) 
print("%d / %d = %.1f" %(100,200,100/200)) # .1f는 소수점 1자리까지 표현
print("%d / %d = %10.1f" %(100,200,100/200))

#데이터 타입의 이해
myVar = 100
print(myVar, ":", type(myVar))
myVar = 100.0
print(myVar, ":", type(myVar))
myVar = "안녕"
print(myVar, ":", type(myVar))
myVar = False
print(myVar, ":", type(myVar))

#간단한 덧셈 계산기
num1 = int(input("첫 번째 숫자를 입력하세요 : ")) # input 입력 데이터는 항상 문자열(str)타입
num2 = int(input("두 번째 숫자를 입력하세요 : "))

# print("%d + %d = %d" %(num1, num2, num3)) # int가 아닌 str이 와서 에러 발생

##num1 = int(num1)
##num2 = int(num2)
num3 = num1 + num2


print("%d + %d = %d" %(num1, num2, num3))

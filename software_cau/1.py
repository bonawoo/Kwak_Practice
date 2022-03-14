# 변수 생성
x = 100
print(x)

# 변수의 사용(마음대로 바꿀 수 있다)
x = 200
print(x)

a = 100
b = 50

# 변수의 값을 꺼내서 사용한다(result라는 새로운 값 생성)
result = a + b
print(a, "+", b, "=", result)

# 문자열 변수에 저장하기
name = "홍길동"
age = 15
print("제 이름은", name, "입니다.")
print("나이는", age, "세 입니다.")

# 키보드 입력을 받아 변수에 저장하기
name = input("당신의 이름은 무엇입니까? : ") #Enter를 쳐야 입력이 완료
print(name, "씨 반가워요.")


# 날씨 안내 로봇 만들기
month = input("월 입력: ")
day = input("일 입력: ")
area = input("지역 : ")
lowTemp = input("최저 기온 : ")
highTemp = input("최고 기온 : ")

print()
print("=========================================")
print(month, "월", day, "일", area, "지역 날씨 안내입니다.") # ,(comma)는 띄어쓰기가 무조건 발생함.
print("아침 최저 기온은 ", lowTemp, "도 이고,")
print("낮 최고 기온은 ", highTemp, "도입니다.")
print("=========================================")

# 문자열 서식(format)
print()
print("=========================================")
print("%s월 %s일 %s 지역 날씨 안내입니다." %(month, day, area))
print("아침 최저 기온은 %s도 이고," %lowTemp)
print("낮 최고 기온은 %s도입니다." %highTemp)
print("=========================================")



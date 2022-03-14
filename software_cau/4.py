# 이스케이프 문자 : 문자열 내에서 특수한 기능을 수행하는 문자
print("줄바꿈\n연습")
print("\t탭키\t연습")
print("글자가\"강조\"되는 효과1")
print("글자가\'강조\'되는 효과2")
print("\\\\\\ 백슬래시3개 출력")
print(r"\n\t\"\\를 그대로 출력")

#print 함수의 마지막 출력 값은 줄바꿈 문자임
print("줄바꿈없애기", end="")
print("마지막 출력값  변경하기", end="♥\n")

#서식 관련 참고사항
name = "홍길동"
age = 22
print("저는 %s이고 나이는 %d세 입니다." % (name, age))
print("저는 {}이고 나이는 {}세 입니다." .format(name,age))
print(f"저는 {name}이고 나이는 {age}세 입니다.")

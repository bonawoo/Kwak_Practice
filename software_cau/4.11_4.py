#Tuple(컴퓨터에서 아주 빠르게 동작) - 이유: 읽기 전용
tt1 = (10,20,30)
tt2 = 10,20,30 # 괄호를 생략하면 튜플로 인식

del(tt1) # 튜플 자체는 삭제 가능


#Dictionary{"key" : "value"} - 키밸류 쌍들의 순서의 의미가 없음
phone_book = {"홍길동" : "010-1234-5678", "강감찬":"010-9876-5432"}
print(phone_book["홍길동"])

student1 = {"학번":1000, "이름":"홍길동", "학과":"열공학과"}
print("┌--------------┐")
print("│학과:%s\t│" % student1["학과"])
print("│학번:%s\t│" % student1["학번"])
print("│이름:%s\t│" % student1["이름"])
print("└--------------┘")

student1["연락처"] = "010-0000-1111"
student1["학과"] = "파이썬학과"
print(student1)

student_list = []
student_list.append({"학번":1000, "이름":"홍길동", "학과":"열공학과"})
student_list.append({"학번":1001, "이름":"강감찬", "학과":"체육학과"})
student_list.append({"학번":1002, "이름":"이순신", "학과":"물리학과"})
student_list.append({"학번":1003, "이름":"신사임당", "학과":"열공학과"})

print("==모든 학생의 정보 출력==")
for data in student_list:
    print("%s(%s, %d)" % (data["이름"], data["학과"], data["학번"]))
    
print("==모든 학생의 정보 출력==")
for i in range(0, len(student_list), 1):
    print("%s(%s, %d)" % (student_list[i]["이름"], student_list[i]["학과"], student_list[i]["학번"]))

print("\n==열공학과 학생 이름 출력==")
for i in range(0, len(student_list),1):
    if student_list[i]["학과"] == "열공학과":
        print(student_list[i]["이름"])

name_cnt = 0
input_str = input("검색할 이름을 입력하세요 : ")
for data in student_list:
    if str(input_str) in str(data["이름"]):
        print("%s(%s, %d)" % (data["이름"], data["학과"], data["학번"]))
        name_cnt +=1
if name_cnt == 0:
    print("'%s'에 대한 검색 결과가 없습니다." % input_str)

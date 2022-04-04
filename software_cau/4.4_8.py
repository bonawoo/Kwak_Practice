str_list = input("문장을 입력하세요:")
finder = input("어떤 글자를 찾을까요?:")
cnt = 0
for i in str_list:
    if i == finder:
        cnt +=1
print("입력한 문장에서 %s의 갯수는 %d개 입니다." %(finder, cnt))

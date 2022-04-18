def change_case(text) :
    result = ""
    for i in text:
        if(i.isupper()):
            result += i.lower()
        else:
            result += i.upper()
    return result

user_text = input("문자열을 입력하세요: ")
print("%s를 %s로 변환하였습니다." %(user_text, change_case(user_text)))

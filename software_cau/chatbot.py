text = input("무엇을 도와드릴까요? : ")

while text != "종료":
    if "안녕" in text:
        print("안녕하세요.")
    elif "반가워" in text:
        print("저도 반가워요.")
    else:
        print("죄송해요. 이해하지 못했어요")
    text = input("무엇을 도와드릴까요? : ")

print("대화를 종료합니다.")

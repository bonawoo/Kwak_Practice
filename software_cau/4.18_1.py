def print_address(name):
    print("서울특별시 종로구 1번지")
    print("파이썬 빌딩 7층")
    print(name) #name은 함수 내부에서만 사용(매개변수)
    
print_address("홍길동")


#함수는 return을 만나면 즉시 함수를 종료함

def c_to_f(temp):
    return temp * 1.8 +32

c = int(input("섭씨 온도를 입력하세요:"))
f = c_to_f(c)

print("섭씨 %d도는 화씨 %.1f도 입니다." %(c,f))

#리스트 : [](컨테이너 객체)
import random
한식 = ['불고기', '제육볶음', '닭볶음탕', '김치찌개', '해물탕']
print("오늘의 추천 음식 : %s" % 한식[random.randint(0,4)])

print("어떤 음식 종류를 추천할까요?")
print("한식(1) 중식(2) 일식(3) 양식(4) 아무거나(5)")
n = int(input("입력 : "))
중식 = ['짜장면','짬뽕','볶음밥']
일식 = ['초밥','우동','돈까스']
양식 = ['스테이크','파스타','스프']

if n == 5: # 아무거나 입력 시 난수 
    n = random.randint(0,4)
음식 = [한식, 중식, 일식, 양식]
print("오늘의 추천 음식 : %s" % 음식[n-1][random.randint(0,2)])

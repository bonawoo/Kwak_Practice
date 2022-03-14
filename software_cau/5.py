#커피 가게 매출 계산하기

americano = int(input("아메리카노 판매수 : "))
cafelatte = int(input("카페라떼 판매수 : "))
capucino = int(input("카푸치노 판매수 : "))

total = americano * 2000 + cafelatte * 3000 + capucino * 3500

print("총 매출은 %d원 입니다." %total)

#화씨 온도를 섭씨로 변환하기

f_temp = float(input("화씨온도: "))
c_temp = (f_temp - 32) * 5 / 9
print("섭씨온도:%f" % c_temp)

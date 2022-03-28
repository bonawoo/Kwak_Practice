#자동 판매기 프로그램
money = int(input("투입한 돈: "))
buy = int(input("물건값: "))
refund = money - buy
print("거스름돈: %d"  % refund)
coin_500 = refund // 500
print("500원 동전의 개수: %d" % coin_500)
coin_100 = (refund % 500) // 100
print("100원 동전의 개수: %d" % coin_100)

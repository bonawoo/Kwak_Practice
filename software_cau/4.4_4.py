total=0
odd_total=0
even_total=0
for i in range(1,101,1):
    total += i
    if(i % 2):
        odd_total += i
    else:
        even_total += i

print("1부터 100까지의 합은 %d입니다." % total)
print("1부터 100까지의 홀수의 합은 %d입니다." % odd_total)
print("1부터 100까지의 짝수의 합은 %d입니다." % even_total)

odd_total=0
even_total=0
for i in range(1,101,2):
    odd_total += i
    
for i in range(2,101,2):
    even_total += i
    
print("1부터 100까지의 홀수의 합은 %d입니다." % odd_total)
print("1부터 100까지의 짝수의 합은 %d입니다." % even_total)


n = int(input("1부터 몇 까지의 합을 구할까요?:"))
total = 0
for j in range(1,n+1,1):
    total += j
print("1부터 %d까지의 합은 %d입니다." %(n, total))

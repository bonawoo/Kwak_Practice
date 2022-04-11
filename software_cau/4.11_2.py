heroes = ['아이언맨','토르','헐크','스칼렛 위치']

for i in range(0,4,1):
    print("이름 : %s" % heroes[i])

scores = [85, 70, 90, 98, 87, 68, 77, 100, 75, 80]
total = 0
for i in range(0,len(scores),1):
    total += scores[i]

print("학생 10명의 점수 평균은 %.2f 입니다." % (total / len(scores)))

total = 0
for num in scores:
    total += num

print("학생 10명의 점수 평균은 %.2f 입니다." % (total / len(scores)))

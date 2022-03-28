#두 점 사이의 거리 구하기
import math
x1 = int(input("첫 번째 점의 x값을 입력하세요 : "))
y1 = int(input("첫 번째 점의 y값을 입력하세요 : "))
x2 = int(input("두 번째 점의 x값을 입력하세요 : "))
y2 = int(input("두 번째 점의 y값을 입력하세요 : "))
d = math.sqrt((x1-x2)**2+(y1-y2)**2)
print("두 점 (%d,%d)와 (%d,%d) 사이의 거리는 %f 입니다." %(x1,y1,x2,y2,d))

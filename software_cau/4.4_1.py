import turtle as t

n = int(input("몇각형을 그릴까요?:"))
for i in range(n):
    t.forward(100)
    t.right(360/n)
    

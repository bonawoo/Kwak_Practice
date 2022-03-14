import turtle
t = turtle.Pen()

width = int(input("사각형의 가로길이를 입력하세요 : "))
height = int(input("사각형의 세로길이를 입력하세요 : "))

t.forward(width)
t.right(90)
t.forward(height)
t.right(90)
t.forward(width)
t.right(90)
t.forward(height)
t.right(90)

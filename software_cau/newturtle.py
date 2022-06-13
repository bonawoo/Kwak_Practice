import turtle

class Myturtle(turtle.Turtle): #부모의 class 지정
        
    def rectangle(self, w, h):
        for i in range(2):
            self.forward(w)
            self.right(90)
            self.forward(h)
            self.right(90)
    def star(self, l):
        for i in range(5):
            self.forward(l)
            self.right(360*2/5)
            
if __name__ == '__main__':
    t1 = Myturtle()
    t1.rectangle(100,50)
    t1.star(100)
    t1.circle(100)

from tkinter import *
def click0():
    display.insert(END,"0")
    
def click1():
    display.insert(END,"1")
    
def click2():
    display.insert(END,"2")
    
def click3():
    display.insert(END,"3")
    
def click4():
    display.insert(END,"4")
    
def click5():
    display.insert(END,"5")
    
def click6():
    display.insert(END,"6")
    
def click7():
    display.insert(END,"7")
    
def click8():
    display.insert(END,"8")
    
def click9():
    display.insert(END,"9")

def click_div():
    display.insert(END,"/")

def click_clear():
    display.delete(0,END)

def click_mult():
    display.insert(END,"*")

def click_min():
    display.insert(END,"-")

def click_dot():
    display.insert(END,".")

def click_result():
    text = display.get()
    text = str(eval(text))
    print(text)
    display.delete(0,END)
    display.insert(END,text)

def click_plus():
    display.insert(END,"+")

#시험범위 아님
def aaa(x=0): #초기화
    print(x)

def click(x=0):
    display.insert(END,x)

lambda : print("a")

window=Tk()
window.title("계산기")

text = ""
#widget 생성
display = Entry(window, width=33, bg="yellow")

#btn7 = Button(window, text="7", width=5, command=click7)
btn7 = Button(window, text="7", width=5, command=lambda x="7": click(x))
btn8 = Button(window, text="8", width=5, command=lambda x="8": click(x))
btn9 = Button(window, text="9", width=5, command=click9)
btn_div = Button(window, text="/", width=5, command=click_div)
btn_clear = Button(window, text="C", width=5, command=click_clear)

btn4 = Button(window, text="4", width=5, command=click4)
btn5 = Button(window, text="5", width=5, command=click5)
btn6 = Button(window, text="6", width=5, command=click6)
btn_mult = Button(window, text="*", width=5, command=click_mult)
btn_empty1 = Button(window, text=" ", width=5)

btn1 = Button(window, text="1", width=5, command=click1)
btn2 = Button(window, text="2", width=5, command=click2)
btn3 = Button(window, text="3", width=5, command=click3)
btn_min = Button(window, text="-", width=5, command=click_min)
btn_empty2 = Button(window, text=" ", width=5)

btn0 = Button(window, text="0", width=5, command=click0)
btn_dot = Button(window, text=".", width=5, command=click_dot)
btn_result = Button(window, text="=", width=5, command=click_result)
btn_plus = Button(window, text="+", width=5, command=click_plus)
btn_empty3 = Button(window, text=" ", width=5)

## grid
display.grid(row=0, column=0, columnspan=5)

btn7.grid(row=1, column=0)
btn8.grid(row=1, column=1)
btn9.grid(row=1, column=2)
btn_div.grid(row=1, column=3)
btn_clear.grid(row=1, column=4)

btn4.grid(row=2, column=0)
btn5.grid(row=2, column=1)
btn6.grid(row=2, column=2)
btn_mult.grid(row=2, column=3)
btn_empty1.grid(row=2, column=4)

btn1.grid(row=3, column=0)
btn2.grid(row=3, column=1)
btn3.grid(row=3, column=2)
btn_min.grid(row=3, column=3)
btn_empty2.grid(row=3, column=4)

btn0.grid(row=4, column=0)
btn_dot.grid(row=4, column=1)
btn_result.grid(row=4, column=2)
btn_plus.grid(row=4, column=3)
btn_empty3.grid(row=4, column=4)

window.mainloop()

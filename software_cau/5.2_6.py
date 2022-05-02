from tkinter import *

def cal():
    global text

def clear():
    entry1.delete(0, END)

def ans():
    print(eval(text))
window = Tk()

window.title("계산기")
window.geometry("450x150")

text = ""
entry1 = Entry(window, width=60, bg="yellow")
button0 = Button(window, text="0", width=10, command=cal)
button1 = Button(window, text="1", width=10, command=cal)
button2 = Button(window, text="2", width=10, command=cal)
button3 = Button(window, text="3", width=10, command=cal)
button4 = Button(window, text="4", width=10, command=cal)
button5 = Button(window, text="5", width=10, command=cal)
button6 = Button(window, text="6", width=10, command=cal)
button7 = Button(window, text="7", width=10, command=cal)
button8 = Button(window, text="8", width=10, command=cal)
button9 = Button(window, text="9", width=10, command=cal)
button_minus = Button(window, text="-", width=10, command=cal)
button_plus = Button(window, text="+", width=10, command=cal)
button_divide = Button(window, text="/", width=10, command=cal)
button_times = Button(window, text="*", width=10, command=cal)
button_ans = Button(window, text="=", width=10, command=ans)
button_dot = Button(window, text=".", width=10, command=cal)
button_clear = Button(window, text="C", width=10, command=clear)
button_empty1 = Button(window, text=" ", width=10)
button_empty2 = Button(window, text=" ", width=10)
button_empty3 = Button(window, text=" ", width=10)

entry1.grid(row=0, column=0, columnspan=5)
button7.grid(row=1,column=0)
button8.grid(row=1,column=1)
button9.grid(row=1,column=2)
button_divide.grid(row=1,column=3)
button_clear.grid(row=1,column=4)
button4.grid(row=2,column=0)
button5.grid(row=2,column=1)
button6.grid(row=2,column=2)
button_times.grid(row=2,column=3)
button_empty1.grid(row=2,column=4)
button1.grid(row=3,column=0)
button2.grid(row=3,column=1)
button3.grid(row=3,column=2)
button_minus.grid(row=3,column=3)
button_empty2.grid(row=3,column=4)
button0.grid(row=4,column=0)
button_dot.grid(row=4,column=1)
button_ans.grid(row=4,column=2)
button_plus.grid(row=4,column=3)
button_empty3.grid(row=4,column=4)

window.mainloop()

#위젯 배치 방법(pack, place, grid)

from tkinter import *

window = Tk()
window.geometry("210x210")

btnList = []
btnList.append( Button(window, text="버튼1"))
btnList.append( Button(window, text="버튼2"))
btnList.append( Button(window, text="버튼3"))

for btn in btnList:
    btn.pack(side = LEFT) #LEFT, RIGHT, TOP, BOTTOM

#고정위치 배치
btnList[0].place(x=0,y=0)
btnList[1].place(x=80,y=80)
btnList[2].place(x=160,y=100)

#그리드 배치
btnList[0].grid(row=0, column=0)
btnList[1].grid(row=1, column=1)
btnList[2].grid(row=2, column=2)

label1 = Label(window, text="라벨1", bg="yellow")
label2 = Label(window, text="라벨2", bg="pink")
label3 = Label(window, text="라벨3", bg="light green")
label4 = Label(window, text="라벨4", bg="light blue")

label1.grid(row=0, column=0, rowspan=2)
label2.grid(row=0, column=1)
label3.grid(row=0, column=2)
label4.grid(row=1, column=1, columnspan=2)

window.mainloop()

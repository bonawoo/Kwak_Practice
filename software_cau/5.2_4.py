from tkinter import *
from tkinter import messagebox #메세지박스

def myFunc():
    messagebox.showinfo("고양이 버튼", "고양이가 귀엽죠?")

window = Tk()
photo = PhotoImage(file="cat.gif")
button1 = Button(window, image = photo, command=myFunc)
button1.pack()

window.mainloop()

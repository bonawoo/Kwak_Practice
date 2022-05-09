from tkinter import *
from tkinter import messagebox

def readfile():
    with open("새파일.txt", "r") as f:
        data = f.read()
    text1.delete(1.0, END)
    text1.insert(1.0, data)

def writefile():

    mod_text = text1.get(1.0, END)
    with open("새파일.txt", "w") as f:
        f.write(mod_text)
    messagebox.showinfo("알림", "저장되었습니다.")

window = Tk()
text1 = Text(window, width=40, height=20, bg="white")
button = Button(window, text="파일 불러오기!", command=readfile)
button2 = Button(window, text="파일 저장하기!", command=writefile)

text1.pack()
button.pack()
button2.pack()
window.mainloop()

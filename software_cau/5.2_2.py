from tkinter import *

def CtoF():
    temp_c = entry1.get() #문자열로 읽음
    entry2.delete(0,END)
    entry2.insert(0, float(temp_c) * 1.8 +32)

window = Tk()

window.title("C to F temparature")
window.geometry("500x500")

entry1 = Entry(window, width=20,bg="light green")
entry2 = Entry(window, width=20, bg = "pink")
label1 = Label(window, text="섭씨")
label2 = Label(window, text="화씨")
button1 = Button(window, text="섭씨->화씨", command=CtoF)

label1.pack()
entry1.pack()
label2.pack()
entry2.pack()
button1.pack()

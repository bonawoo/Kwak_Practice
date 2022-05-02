from tkinter import *

def changeImage():
    global cnt
    cnt += 1
    label1["image"] = photo_list[cnt % len(photo_list)]
    
window = Tk()
window.geometry("600x600")

cnt = 0
photo1 = PhotoImage(file="dog.gif")
photo2 = PhotoImage(file="cat.gif")
photo3 = PhotoImage(file="rabbit.gif")

photo_list = [photo1, photo2, photo3]

button1 = Button(window, text="다음 사진", command=changeImage)
label1 = Label(window, image = photo_list[0])

button1.pack()
label1.pack()

window.mainloop()

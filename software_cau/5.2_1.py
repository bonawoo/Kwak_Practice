#import tkinter -> 매번 tkinter.Tk() 이런 식으로 함수를 호출해야
from tkinter import *

def myFunc():
    value = entry1.get()
    print(value)

window = Tk() # Tk 창 생성 후 window 변수에 저장

window.title("Python window") #제목
window.geometry("800x800") #크기
window.resizable(0,0) #크기 고정 설정 (1{가로},1{세로})하면 크기 조절 가능

#위젯
##label1 = Label(window, text="파이썬 윈도우")
photo = PhotoImage(file="test_gif.gif")
label1 = Label(window, image=photo)                              
label2 = Label(window, text="라벨입니다", font=("굴림체",30),fg="red", anchor = NW) #anchor = tkinter.NW
label1.pack()
label2.pack()
#label2.configure(text="configure 함수 호출", fg="red")
label2["text"] = "configure 없이 딕셔너리 활용하여 속성 변경" #Dictionary 활용
label2["bg"] = "skyblue"

entry1 = Entry(window, width=20, bg="light green") # 한 줄이라 높이설정 x
entry1.insert(0, "좋은 날씨네요.")
entry1.insert(0, "안녕하세요 ")
entry1.pack()

label2["text"] = entry1.get()
entry1.delete(0, END)

text1 = Text(window, width=20, bg="pink") #여러줄 입력 가능
text1.insert(1.0, "AAAAAAA\n") #1행 0번 위치에 입력
text1.insert(2.0, "BBBBBBB\n")
text1.insert(2.0, "CCCCCCC\n")
text1.insert(1.1, "D") #1행 1번 위치에 문자열 D
text1.pack()

print(text1.get(1.0,END))

button1 = Button(window, text="엔트리 읽기!", command=myFunc)
button1["bg"] = "skyblue"

button1.pack()

window.mainloop() #항상 마지막에 사용

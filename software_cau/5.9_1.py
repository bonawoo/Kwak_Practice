#open과 close는 항상 같이 있어야 함
#f = open("새파일.txt", "w")
#f.close()

with open("새파일.txt", "w") as f:
    for i in range(1,11,1):
        data = "%d번째 줄입니다. \n" % i
        f.write(data)
    
##with open("새파일.txt", "r") as f:
##    data = f.read()
##    print(data)

with open("새파일.txt", "r") as f:
    data = f.readlines()
    for line in data:
        print(line, end="")

for i in range(1,10,1):
    sentence =""
    for j in range(2,10,1):
        sentence += "%d x %d = %d \t" %(j, i, i*j)
    print(sentence)

sentence =""
for i in range(1,10,1):
    for j in range(2,10,1):
        sentence += "%d x %d = %d \t" %(j, i, i*j)
    sentence += "\n"
print(sentence)


numbers = []
for i in range(1,101,1):
    if "3" in str(i) or "6" in str(i) or "9" in str(i):
        numbers.append("*")
    else : numbers.append(i)

print(numbers)

#len() 반드시 알아두기 (중요!!)

letters = ['A','B','C','D','E','F']
print(letters[0:3]) # Slicing

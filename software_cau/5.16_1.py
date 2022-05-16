import csv

cnt = 0
with open("NHIS_OPEN_T20_2016.csv", "r") as f:
    csv_data = csv.reader(f)
    next(csv_data) #헤더 스킵
    for row in csv_data:
        if int(row[5]) == 11 :
            if (int(row[7]) == 3 or int(row[7]) == 8 or int(row[7]) == 11):
                cnt +=1

print("서울에서 진료한 외래환자 수는 %d명입니다." %cnt)

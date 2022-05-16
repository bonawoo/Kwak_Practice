import csv

cnt = 0
total_cnt = 0
with open("NHIS_OPEN_T20_2016.csv", "r") as f:
    csv_data = csv.reader(f)
    next(csv_data) #헤더 스킵
    for row in csv_data:
        if int(row[3]) == 2:
            if int(row[5]) == 28 :
                if int(row[4]) == 11 or int(row[4]) == 12:
                    if int(row[8]) == 12:
                        daily_cnt = int(row[17])
                        print("처방일 수 : %d" % daily_cnt)
                        total_cnt += daily_cnt
                        cnt += 1

print("평균 처방일 수 : %.2f" %(total_cnt / cnt))

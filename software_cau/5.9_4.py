import csv
data = []
with open("sample.csv", "r") as f:
    csv_data = csv.reader(f)
    header = next(csv_data)
    for row in csv_data :
        data.append(row)

##for i in range (0, 7, 1):
##    print("이름 : %s      \t키 : %s\t몸무게 : %s\t나이: %s\t혈액형:%s\t" %(data[i][0], data[i][1], data[i][2],str(2022 - int(data[i][3]) + 1), data[i][4] ))
result_data = []
for row in data:
    BMI = float(row[2]) / (( float(row[1]) / 100) ** 2)
    if BMI < 18.5 :
        status = "저체중"
    elif BMI <25:
        status = "정상체중"
    elif BMI < 30 :
        status = "과체중"
    elif BMI < 35 :
        status = "비만"
    elif BMI < 40 :
        status = "고도비만"
    else :
        status = "초고도비만"
    print("이름 : %s      \tBMI : %.2f\t체중상태 : %s" %(row[0], BMI, status))
    
    result_data.append([row[0], BMI, status])

with open("result.csv", "w", newline="") as f:
    wr = csv.writer(f)
    for row in result_data:
        wr.writerow(row)


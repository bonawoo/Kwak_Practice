import csv

##with open("sample.csv", "r") as f:
##    csv_data = csv.reader(f)
##    for row in csv_data:
##        print(row)
data = []
with open("sample.csv", "r") as f:
    csv_data = csv.reader(f)
    header  = next(csv_data) # 헤더 별도보관
    for row in csv_data :
        data.append(row)
print(header)
print(data)

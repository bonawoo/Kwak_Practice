import csv

print("%15s\t %15s\t %15s" % ("시도", "증감량", "증감률"))
print("-----------------------------------------------------------------------------")
with open("행정구역_시군구_별__성별_인구수_20220516133546.csv", "r") as f:
    csv_data = csv.reader(f)
    next(csv_data)
    next(csv_data)
    for row in csv_data:
        if row[0] != "세종특별자치시" and row[1].isdigit():
            data_2001 = int(row[1])
            data_2021 = int(row[4])
            print("%15s\t %15d\t %15.2f" % ( row[0], (data_2021 - data_2001), (data_2021 - data_2001) / data_2001))

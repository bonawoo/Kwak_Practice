import csv
data = []
data.append(["Jin", 179, 64])
data.append(["Suga", 174, 59])

with open("test.csv", "w", newline="") as f:
    wr = csv.writer(f)
    for row in data:
        wr.writerow(row)

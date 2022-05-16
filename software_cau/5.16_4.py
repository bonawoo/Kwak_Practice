import csv
data = []
with open("NHIS_OPEN_T20_2016.csv", mode="r") as f:
    csv_data = csv.reader(f)
    header = next(csv_data)
    for row in csv_data:
        if int(row[5]) == 49:
            data.append(row)

with open("JEJU_HISTORY.csv", "w", newline="") as f:
    wr = csv.writer(f)
    wr.writerow(header)
    for row in data:
        wr.writerow(row)
        


import csv
ages = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0] # list to count
with open("NHIS_OPEN_T20_2016.csv", mode="r") as f:
    csv_data = csv.reader(f)
    next(csv_data)
    for row in csv_data:
        ages[(int(row[4]) - 1)] += 1
        
for i in range(len(ages)):
    print("Age %d ~ %d : %d" % ( i*5, i*5+4, int(ages[i])))

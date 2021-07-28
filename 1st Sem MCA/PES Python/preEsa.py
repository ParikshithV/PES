import csv
filename = "demo.csv"

eles = ["field1", "field2"]

with open(filename, 'a') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerows(eles)
    #csvfile.close()

with open(filename, 'r') as csvfile:
    reader = csv.reader(csvfile)
    for row in reader:
        print(row)
    #csvfile.close()

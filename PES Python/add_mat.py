n = int(input("Enter limit of matrix: "))
a=[[n]*n]*n
b=[[n]*n]*n
result=[[n]*n]*n

for l in range(0,n):
    for m in range(0,n):
        a[l][m] = int(input("Enter elements of first matrix: "))
for l in range(0,n):
    for m in range(0,n):
        b[l][m] = int(input("Enter elements of second matrix: "))

for i in range(n):
   for j in range(n):
       result[i][j] = a[i][j] + b[i][j]

for r in result:
   print(r)
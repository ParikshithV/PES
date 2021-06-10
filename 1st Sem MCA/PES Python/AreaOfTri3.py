import math
a=float(input("enter side 1 "))
b=float(input("enter side 2 "))
c=float(input("enter side 3 "))
s=(a+b+c)/2
area=math.sqrt(s*(s-a)*(s-b)*(s-c))
print("area: ",area)



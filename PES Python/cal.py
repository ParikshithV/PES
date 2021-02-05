# print("Select starting day of the month:")
# print(" 1 if Monday\n 2 if Tuesday\n 3 if Wednesday\n 4 if Thursday\n 5 if friday\n 6 if saturday\n 0 if Sunday")
# dayin = int(input("Enter day no. :"))
dayin=7 #as 1st of January is assumed as a Sunday

print("Mon Tue Wed Thu Fri Sat Sun")
i=1
counter=0
day=dayin
for i in range(1,day):
    print("    ",end="")
    counter=counter+1
    i=i+1
for j in range(1,32):
    print(j,end="  ")
    if j<10:
        print(" ",end="")
    counter=counter+1
    j=i+1
    if counter==7:
        print("\n")
        counter=0
        
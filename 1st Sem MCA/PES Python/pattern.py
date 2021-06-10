count = 0
p=1
n=9
for i in range(1,10):
    while(count<9-i):
        print(" ",end=" ")
        count=count+1
    while(p<=i-1):
        print(p,end=" ")
        p=p+1
    while(p>0):
        print(p,end=" ")
        p=p-1
    p=1
    count=0
    print("\n")
    i=i+1
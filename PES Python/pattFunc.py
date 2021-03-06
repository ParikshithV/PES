max = int(input("Enter max limit: "))
def pattern(max):
    for i in range (max+1,0,-1):
        print("*"*i)
pattern(max)
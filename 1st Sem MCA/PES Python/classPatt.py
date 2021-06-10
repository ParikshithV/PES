min = 1
def pattern(ch,min):
    global max
    if(min<=max):
        print(ch*min)
        pattern(ch,min+1)
        
def revpattern(ch,max):
    if(max>0):
        print(ch*max)
        revpattern(ch,max-1)

max = int(input("Enter max limit: "))
#ch = input("Enter character to print: ")
print("\npattern:")
pattern("*",min)
print("\nrevpattern:")
revpattern("#",max)

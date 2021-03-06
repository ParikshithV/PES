max = int(input("Enter max limit: "))
ch = input("Enter character to print: ")
count = 1
def pattern(ch,max):
    while(max>=0):
        print(ch*max)
        max-=1

def revpattern(ch,max,count):
    while(count<=max):
        print(ch*count)
        count+=1
print("pattern:")       
pattern(ch,max)
print("revpattern:")
revpattern(ch,max,count)
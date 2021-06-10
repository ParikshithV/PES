ch=1
list1 = []
while(ch==1):
    i=input("Enter some data: ")
    list1.append(i)
    ch=input("Press 1 to continue, 0 to stop")
    
for count in range(len(list1)):
    if(type(i[count])==string):
        string_list[count]=i[count]
    elif(type(i[count])==int):
        int_list[count]=i[count]        
    
#incomplete program
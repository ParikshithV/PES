
class student1:
    def sing(self):
        print("can sing")
        
class student2:
    def sing(self):
        print("can't sing")
        
def singing(stud):
    stud.sing() #stud is "stud2" passed as arg
    #Accessing sing() using stud obj
    
stud1 = student1() 
stud2 = student2()

stud1.sing()
stud2.sing()
#singing(stud2) #passing to line 10 (string param)

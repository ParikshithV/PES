#Class demo
class student:
    srn = ""
    name = ""
    marks = []
    def grade(total):
        global marks
        avg = total//len(marks)
        perc = avg
        if (perc<35):
            grade='F'
        elif (perc<45):
            grade ='E'
        elif (perc<55):
            grade ='D'
        elif (perc<75):
            grade ='C'
        elif (perc<90):
            grade ='B'
        elif (perc<=100):
            grade ='A'
        else:
            grade = 'NA'
            print("Invalid marks")
        return grade
                
    def inpt():
        global srn
        global name
        global marks
        total=0
        marks=list()
        srn = input("Enter student SRN: ")
        name = input("Enter studen name: ")
        print("Enter 5 subject marks:")
        for i in range(0,5):
            marks.append(input(" "))
        for i in marks:
            total+=int(i)
        return total
    
    def display(srn, name, grade, marks):
        print("Student SRN:",srn)
        print("Student name:",name)
        print("Student marks:",marks)
        print("Student grade:",grade)
    
    def studetail(self):
        global srn
        global name
        global marks
        total = student.inpt()
        grade = student.grade(total)
        student.display(srn, name, grade, marks)


s1 = student()
s1.studetail()

s2 = student()
s2.studetail()

s3 = student()
s3.studetail()

s4 = student()
s4.studetail()

s5 = student()
s5.studetail()

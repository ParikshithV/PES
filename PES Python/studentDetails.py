srn=[]
name=[]
course=[]
percentage=[]

for i in range(3):
    j = str(i+1)
    srn.append(int(input("\nEnter student"+j+" srn: ")))
    name.append(input("Enter student"+j+" name: "))
    course.append(input("Enter student"+j+" course: "))
    percentage.append(int(input("Enter student"+j+" percentage: ")))

student = {1: {'srn': srn[0], 'name': name[0], 'course': course[0], 'percentage': percentage[0]},
           2: {'srn': srn[1], 'name': name[1], 'course': course[1], 'percentage': percentage[1]},
           3: {'srn': srn[2], 'name': name[2], 'course': course[2], 'percentage': percentage[2]}}

#print(student)

print ("\n{:<10} {:<10} {:<10} {:<10}".format('SRN', 'Name', 'Course', 'Percentage'))
for count in range(3):
    c = count+1
    print ("{:<10} {:<10} {:<10} {:<10}".format(student[c]['srn'], student[c]['name'], student[c]['course'], student[c]['percentage']))
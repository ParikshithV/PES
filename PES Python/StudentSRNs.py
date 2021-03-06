srns = ["CA003","CA013","CA036","CA052","CA078"] 
py_marks = [98,99,80,90,89] 
dsc_marks = [91,90,84,92,79] 
os_marks = [78,39,60,50,84] 
web_marks = [100,69,78,70,59]

students = {}
studentTotal={}
rank = {}

for i in range (0,len(srns)):
    rank[i+1] = {}
    students[srns[i]] = {}
    studentTotal[srns[i]] = {}
    students[srns[i]]["py"] = {}
    students[srns[i]]["dsc"] = {}
    students[srns[i]]["os"] = {}
    students[srns[i]]["web"] = {}
    
for i in range (0,len(py_marks)):
    total = 0
    students[srns[i]]["py"] = py_marks[i]
    total += py_marks[i]
    students[srns[i]]["dsc"] = dsc_marks[i]
    total += dsc_marks[i]
    students[srns[i]]["os"] = os_marks[i]
    total += os_marks[i]
    students[srns[i]]["web"] = web_marks[i]
    total += web_marks[i]
    studentTotal[srns[i]] = total
    
print(studentTotal)

for i in range(1,6):
    rank[i] = srns[i-1]
        
for i in range(2,6):       
    if(studentTotal[rank[i]]>studentTotal[rank[i-1]]):
        temp = rank[i-1]
        rank[i-1] = rank[i]
        rank[i] = temp
        
for i in range(1,6):
    print("Rank ", i," = ", rank[i])

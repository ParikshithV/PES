name = input("Enter your name: ")
skills = input("Enter your skills:")
workExp = input("Enter previous work experience: ")
workExpYrs = input("No. of years of work experience: ")
education = input("Education completed: ")

with open("resume.txt",'w') as file:
    file.writelines(['\nName: ', name, '\nSkills: ', skills, '\nWork experience: ', workExp, '\nWork experience in years: ', workExpYrs, '\nEducation: ', education])
with open("resume.txt",'r') as file:
    print(file.read())
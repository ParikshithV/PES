year = int(input("Enter year: "))
month = int(input("Enter month: "))
day = int(input("Enter day: "))

#if month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12:
#    max_day_value = 31
#elif month == 4 or month == 6 or month == 9 or month == 11:
#    max_day_value = 30
#elif year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
#    max_day_value = 29
#else:
#    max_day_value = 28
    
#monthDict = {1:31,3:31,5:31,7:31,8:31,10:31,12:31,4:30,6:30,9:30,11:30,4:29}

monthlist = {1:["jan",31], 2:["feb",30], 3:["mar",31], 4:["apr",30], 5:["may",31], 6:["june",30], 7:["july",31], 8:["aug",31], 9:["sept",30], 10:["oct",31], 11:["nov",30], 12:["dec",31]}

if month < 1 or month > 12:
    print("Date is invalid.")
elif day < 1 or day > monthlist[month][1]:
    print("Date is invalid.")
else:
    print("\nValid date")
    print(day, monthlist[month][0], year)

    if (day==monthlist[month][1] and month==12):
        print("\nNext date: ")
        print("1 jan", year+1)
    elif (day==monthlist[month][1]):
        print("\nNext date: ")
        print("1", monthlist[month+1][0], year)
    else:
        print("\nNext date: ")
        print(day+1, monthlist[month][0], year)
        
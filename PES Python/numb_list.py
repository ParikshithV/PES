number = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
num = int(input("Enter number: "))  

rem = 0
while (num > 0):
    rem = num % 10
    num //= 10
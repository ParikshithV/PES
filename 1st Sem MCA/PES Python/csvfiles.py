import csv

name = input("Name: ")
aNum = input("Aadhar number: ")
mNum = input("Mobile number: ")
bAmt = input("Balance amount: ")


with open('bank.csv', 'w',) as file:
    writer = csv.writer(file)
    writer.writerow(["Name", "Aadhar number", "Mobile number", "Balance amt"])
    writer.writerow([name, aNum, mNum, bAmt])

def deposit():
    dep = int(input("Enter amount to deposit: "))
    depAmt = int(bAmt) + dep
    bAmt = depAmt
    with open('bank.csv', 'w',) as file:
        writer.writerow([name, aNum, mNum, depAmt])

def withdraw():
        dep = int(input("Enter amount to withdraw: "))
        depAmt = int(bAmt) - dep

while True:
    print('\n1. Deposit \n2. Withdrawal \n3. Print passbook')
    choice = int(input("Enter your choice: "))
    if (choice == 1):
        deposit()
    elif (choice == 2):
        withdraw()
    elif (choice == 3):
        print()
    else:
        print("Invalid choice")
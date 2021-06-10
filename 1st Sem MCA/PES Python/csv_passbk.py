import csv
try:
    file=open("atm.csv")
    file.close()
except:
    file=open("atm.csv","x")
    file.close()
a=[]
name=input("Enter name: ")
adharno=input("Enter aadhar number: ")
mobileno=input("Enter mobile no: ")
balance=int(input("Enter current balance: "))
with open('atm.csv', mode='a') as atm:
    atm_writer = csv.writer(atm)
    while(True):
        print("\n")
        print("1.Deposit \n2.withdraw")
        ch=input("Enter choice: ")
        print("\n")
        deposit=0
        withdraw=0
        date="10-4-2021"
        if(ch=="1"):
            withdraw=0
            deposit=int(input("Amount to deposit: "))
            balance=balance+deposit
            
            atm_writer.writerow([balance, deposit,withdraw,date])
        elif(ch=="2"):
            deposit=0
            withdraw=int(input("Amount to withdraw: "))
            if(withdraw<=balance):
                balance=balance-withdraw
                atm_writer.writerow([balance, deposit,withdraw,date])
            else:
                print("Balance low")
        else:
            print("Invalid choice")
        x=input("Do you want to continue? (y/n)     ")
        if(x=="n"):
            break
print("\n")
with open('atm.csv', mode='r',newline="\n") as atm:
    csvFile = csv.reader(atm)
    data=list(csvFile)
    print("BALANCE   ", "   DEPOSIT   ","    WITHDRAWL   ","      TIME    ")
    for row in data: 
        for col in row:
            print(col," "*7,"\t",end="")
        print("")
print("\n")
previous = int(input('previous reading: '))
current = int(input('current reading: '))

units = current - previous
amount = 0

if(units <= 50):
    amount = 50
elif(units>50 and units<=100):
    amount = units*2.5
elif(units>100 and units<=200):
        amount = units*3.6
elif(units>200 and units<=300):
        amount = units*4.4
elif(units>300):
        amount = units*6
else:
        print("Units cannot be negative")
        amount = "N/A"

print("Bill amount is",amount)
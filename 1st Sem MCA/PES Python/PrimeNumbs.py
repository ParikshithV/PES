m = int(input("Enter m: "))  
n = int(input("Enter n: "))  
for n in range(m,n + 1):  
   if n > 1:  
       for i in range(2,n):  
           if (n % i) == 0:  
               break  
       else:  
           print(n)  
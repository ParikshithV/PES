print("Enter the first number:")
n1=int(input())
print("Enter the second number:")
n2 = int(input())
i = 1
while(i <= n1 and i <= n2):
  if(n1 % i == 0 and n2 % i == 0):
    gcd = i
  i = i + 1
print("GCD is:", gcd)
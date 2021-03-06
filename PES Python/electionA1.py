str1=""" modi varanasi 2014 wins 
modi varanasi 2019 wins 
rahul Amethi 2014 wins 
rahul Amethi 2019 loses
rahul waynad 2019 wins 
Smrithi Amethi 2014 loses 
Smrithi Amethi 2019 wins 
Shah Gandhinagar 2014 wins 
Shah Gandhinagar 2019 wins"""

str1 = str1.strip(" ")

results = [[]]
ppls = {}
ppls = set()
years = {}
years = set()
wins = {}
lose = {}
count = 0

eln = str1.split("\n")

for i in range (0,len(eln)):
    results.append(eln[i].split(" ",3))
    count +=1

print("All the politicians who contested:")
for i in range(1,len(eln)+1):
    ppls.add(results[i][0])
print(ppls)

print("\nYears when elections were conducted:")
for i in range(1,len(eln)+1):
    years.add(results[i][2])
print(years)

print("\nWins counted:")
for ppl in ppls:
    elWinCount=0
    elLosCount=0
    for k in range (1,len(results)):
        if (results[k][0] == ppl):
            if (results[k][3].strip(" ") == 'wins'):
                elWinCount+=1
                wins[ppl] = elWinCount
            else:
                elLosCount+=1
                lose[ppl] = elLosCount
print(wins)

print("\nlose counted:")
print(lose)

import random
words = ['food','dessert','space']
wordDictonary = {'food':'chapati','dessert':'aamras','space':'meteor'}
index = random.randrange(0,3)
wordSelect = words[index]
global chances
chances  = 10
global wordsIn
wordsIn = len(wordSelect)
global c

dashes=[]
print("Game start")
flag = "y"

def letterDash():
    for i in dashes:
        print(i,end=" ")
        
for i in wordSelect:
    dashes.append("_")
letterDash()

def inputWord():
    c=0
    i=-1
    flagChar=0
    wordInput = input("\nGuess a character:")
    for ch in wordSelect:
        i+=1
        if(wordInput==ch):
            dashes[i]=ch
            c+=1
            flagChar=1
            
    if(flagChar==0):
        print("Character not found")
        chances -=1
    letterDash()
    flag=input("\nDo you want to continue (y/n)")

while(flag=="y"):
    if(chances > 0 and c < wordsIn):
        inputWord()
    elif(chances > 0):
        print("You loose")
    elif(c < wordsIn):
        print("You win")


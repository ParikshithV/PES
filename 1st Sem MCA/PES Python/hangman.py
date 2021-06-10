import random
words = ['food','dessert','space','windows','mattress']
wordDictonary = {'food':'chapati','dessert':'aamras','space':'meteor','windows':'os','mattress':'sleep'}
index = random.randrange(0,5)
wordSelect = words[index]
chances  = 5
wordsIn = len(wordSelect)
c = 0

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
    global wordSelect
    global c
    global chances
    i=-1
    flagChar=0
    repeat=1
    print("\nClue:",wordDictonary[wordSelect])
    wordInput = input("\nGuess a character: ")
    if (wordInput in dashes):
        i+=1
        flagChar=1
        if(repeat==1):
            print("Letter repeated")
            repeat=0
    else:
        for ch in wordSelect:
            i+=1
            if(wordInput==ch):
                dashes[i]=ch
                c+=1
                flagChar=1
            
    if(flagChar==0):
        print("Character not found")
        print("You have",chances,"left")
        chances -=1
    letterDash()

while(flag=="y"):
    if(c < wordsIn):
        inputWord()
    elif(chances < 0):
        print("You loose")
    elif(c >= wordsIn):
        print("\nYou win!")
        flag="n"

#Program to encode a given string by modifying it unicode/ascii code
# ord() returns ascii/unicode
#chr() returns character of a given ascii / unicode

name=input("Enter your name:")
# Your code starts here..

# name="abcxyz"
finalname=""
for i in name:
    enc=ord(i)
    if (ord(i) < 120):
        enc=enc+3
        otpt=chr(enc)
        finalname=finalname+otpt
    else:
        enc = enc-23
        otpt=chr(enc)
        finalname=finalname+otpt

print(finalname)
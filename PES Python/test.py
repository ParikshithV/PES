def valid_mail(mail):
    flag=True
    sep=mail.rfind('.')
    if mail[sep+1:] not in ['com','co','in']:
        flag=False
    elif not mail[0].isalpha():
        flag=False
    return (mail,flag)  
emails=["pooja@", "@ramya", "yash@gmail","brunda@gmail.com", "gautham@hotmail.com"]
a=map(valid_mail,emails)
for i in a:
    print(i)
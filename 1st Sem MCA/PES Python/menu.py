menu=['idly', 'dosa', 'paratha', 'curry']
menuPrices={'idly':50, 'dosa':30, 'paratha':60, 'curry':20}
orderlist=[]
count=1
user=input("Do you want to order? (y/n)");
while(user=="y" and count<4):
    print(count,": "+menu[count-1])
    count+=1
choice=int(input("input choice"))
orderlist.append(menu[choice-1])
user=input("Do you want to order again? (y/n)");
count=1
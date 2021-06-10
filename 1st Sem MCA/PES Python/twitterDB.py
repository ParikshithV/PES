userDB = {"parikshith", "pallav", "tushar"}
followers = []

def register():
    userName = input("Enter username to register: ")
    if userName in userDB:
        print("User exists")
    else:
        userDB.add(userName)
    choice()

def Display():
    print("Registered users: ")
    print(userDB)
    choice()

def followUser():
    count = 0
    follow = str(input("Enter name to follow: "))
    if follow in userDB:
        followers.append(follow)
        for name in followers:
            if name == follow:
                count += 1
        if count >= 5:
            userDB.remove(follow)
            userDB.add("T"+follow)
    choice()

def choice():
    print("\n 1. Register \n 2. Follow \n 3. Display users ")
    choice = int(input("Enter choice: "))

    if(choice == 1):
        register()
    elif(choice == 2):
        followUser()
    elif(choice == 3):
        Display()
    else:
        print("Enter valid choice")

choice()

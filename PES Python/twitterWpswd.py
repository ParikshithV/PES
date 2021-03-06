userDB = {"@parikshith", "@pallav", "@tushar"}
userPswd = {'@parikshith':'parikshith','@pallav':'pallav'}
followers = []

def register(userName):
    usercheck = ("@"+userName)
    if usercheck in userDB:
        print("User exists")
    else:
        upswd = input("Enter password: ")    
        userDB.add(usercheck)
        userPswd[userName]=upswd
        print("\n***** Welcome",wlcm,"*****\n")

def Display():
    print("Registered users: ")
    print(userDB)
    choice()

def choice():
    print("\n 1. Register \n 2. Display users ")
    choice = int(input("Enter choice: "))

    if(choice == 1):
        userName = input("Enter username to register: ")
        register(userName)
        Display()
    elif(choice == 2):
        Display()
    else:
        print("Enter valid choice")

choice()

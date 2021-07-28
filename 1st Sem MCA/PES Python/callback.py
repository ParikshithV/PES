def statement(name):
    print("length of name is ",name)
    
def statement2(name):
    print("size of name is",name)
    
def mainFunc(name, callback):
    callback(len(name))
    
if __name__ == "__main__":
    name = "parik"
    mainFunc(name, statement)
    mainFunc(name, statement2)
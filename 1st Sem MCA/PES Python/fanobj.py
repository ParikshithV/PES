#Class fans
import random

class a001:
    fan_speed = 0
    
    def inc(func):
        def smartcontrol(self):
            func(self)
            self.fan_speed += 1
            if(self.fan_speed>5):
                self.fan_speed = 0
            print ("Fan speed =",self.fan_speed)
        return smartcontrol
    
    def dec(func):
        def smartcontrol(self):
            func(self)
            self.fan_speed -= 1
            if(self.fan_speed<0):
                self.fan_speed = 5
            print ("Fan speed =",self.fan_speed)
        return smartcontrol
    
    #def display(func):
        #return (print ("\nFan speed =",self.fan_speed))
    
    def __init__(self, faname):
        self.fan_speed=random.randint(0,5)
        print("\n\nFan name:",faname)

    @inc
    def increment(self):
        print("Speed before increase: Speed = {0}".format(self.fan_speed))
        
    @dec
    def decrement(self):
        print("Speed before decrease: Speed = {0}".format(self.fan_speed))
   

fan1 = a001('fan1')
fan1.increment()
fan1.decrement()
fan1.decrement()

fan2 = a001('fan2')
fan2.increment()
fan2.increment()
fan2.decrement()

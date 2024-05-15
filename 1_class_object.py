class Classy:
    # method or function
    def first_test(self):
        print("Test")

    def __init__(self, value)->None:
        self.val= value
        print("i am constructor")

# obj declaring
# obj = Classy() 
obj = Classy(120) 
obj.val = 33
print(obj.val)
# obj.first_test()
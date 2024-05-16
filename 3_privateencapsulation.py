class A:
    _value = "a string"
    def __init__(self,value) -> None:
        self._value = value

    def show(self):
        print(self._value)



obj = A("who")
obj.show()

obj._value = "this is me"
obj.show()

print(obj.__dict__)
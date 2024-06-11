class Car:
    def _init_(self, name, color, engine_hp):
        self.name = name
        self.color = color
        self.engine_hp = engine_hp

def drive(self):
    print("{self.name} Car is driving")

class FlyingCar(Car):
    def _init_(self, name, color, engine_hp):
        super()._init_(name, color, engine_hp)

    def fly(self):
        print("{self.name} Car is flying")

if name == "main":
    fc = FlyCar("SuperFly", "Black", 5000)
    fc.drive()
    fc.fly()

# Expected Output
# SuperFly Car is driving
# SuperFly Car is flying
class Car:
    def __init__(self, name, color, engine_hp):
        self.name = name
        self.color = color
        self.engine_hp = engine_hp

    def drive(self):
        print(f"{self.name} Car is driving")

class FlyingCar(Car):
    def __init__(self, name, color, engine_hp):
        super().__init__(name, color, engine_hp)

    def fly(self):
        print(f"{self.name} Car is flying")

if __name__ == "__main__":
    fc = FlyingCar("SuperFly", "Black", 5000)
    fc.drive()
    fc.fly()

# Expected Output
# SuperFly Car is driving
# SuperFly Car is flying

#include <iostream>
#include <string>
using std::cout;

class Car
{
public:
    std::string name;
    std::string color;
    int engineHP;

    Car() : name(""), color(""), engineHP(0)
    {
        std::cout << name << std::endl;
    }

    Car(std::string name, std::string color, int engineHP)
        : name(name), color(color), engineHP(engineHP) {}

    void drive()
    {
        cout << name << " Car is driving\n";
    }
};

class FlyingCar : public Car
{
public:
    FlyingCar() {}

    FlyingCar(std::string name, std::string color, int engineHP) : Car(name, color, engineHP) {}

    void fly()
    {
        cout << name << " Car is flying\n";
    }
};

int main()
{
    FlyingCar fc("SuperFly", "Black", 5000);
    fc.drive();
    fc.fly();
    return 0;
}

// Expected Output :
// SuperFly Car is driving
// SuperFly Car is flying
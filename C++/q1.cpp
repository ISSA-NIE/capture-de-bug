#include<bits/stdc++.h>
using namespace std;
class Car {
public:
    string name;
    string color;
    int engineHP;

    Car() {
        cout << name <<endl;
    }

    Car(string name, string color, int engineHP)
        : name(name), color(color), engineHP(engineHP) {}

    void drive() {
        cout << name << " Car is driving\n";
    }
};

class FlyingCar : public Car {
public:
    FlyingCar() {}

    FlyingCar(string name, string color, int engineHP) 
    : Car(name,color,engineHP){}
        
    void fly() {
        cout << name << " Car is flying\n";
    }
};

int main() {
    FlyingCar fc("SuperFly", "Black", 5000);
    fc.drive();
    fc.fly();
    return 0;
}


// Expected Output : 
// SuperFly Car is driving
// SuperFly Car is flying
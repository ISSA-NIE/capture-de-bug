#include<iostream>

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

class FlyingCar : private Car {
public:
    FlyingCar() {}

    FlyingCar(string name, string color, int engineHP) {
        this->name = name;
        this->color = color;
        this->engineHP = engineHP;
    }

    void fly() {
        cout << name << " Car is flying\n";
    }
};

int main() {
    FlyCar fc("SuperFly", "Black", 5000);
    fc.drive();
    fc.fly();
}
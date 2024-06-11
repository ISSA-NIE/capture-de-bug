import java.lang.String;
class Car {
String name;
String color;
int engineHP;
Car() {
}
Car(String name, String color, int engineHP) {
this.name = name;
this.color = color;
this.engineHP = engineHP;
}
void drive() {
System.out.println(name + " Car is driving");
}
}
class FlyingCar extends Car {
FlyingCar() {}
FlyingCar(String name, String color, int engineHP) {
this.name = name;
this.color = color;
this.engineHP = engineHP;
}
void fly() {
System.out.println(name + " Car is flying");
}
}
public class Main {
public static void main(String[] args) {
FlyingCar fc = new FlyingCar("SuperFly", "Black", 5000);
fc.drive();
fc.fly();
}
}
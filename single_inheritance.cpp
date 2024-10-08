// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle is starting" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void honk() {
        cout << "Car is honking" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start(); // Inherited from Vehicle
    myCar.honk();  // Method of Car class
    return 0;
}

# Exp-14

## Aim:
To understand the different types of inheritance in C++ by implementing programs demonstrating single, multiple, multilevel, and hierarchical inheritance.

## Software Used:
- Dev c++
  
## Theory:
Inheritance in C++ is a key feature of object-oriented programming that allows one class to acquire the properties and behaviors of another class. It helps in reusing existing code and establishing a relationship between different classes.

Single Inheritance: A derived class inherits from only one base class.
Multiple Inheritance: A derived class inherits from more than one base class.
Multilevel Inheritance: A class is derived from another derived class, forming a multi-level hierarchy.
Hierarchical Inheritance: Multiple derived classes inherit from a single base class.

## Program 1: Single Inheritance
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/4a9f2a03-95c0-4471-966b-6b1801fe326a)


## Program 2: Multiple Inheritance
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

// Base class 1
class Printer {
public:
    void printDocument() {
        cout << "Printer is printing a document" << endl;
    }
};

// Base class 2
class Scanner {
public:
    void scanDocument() {
        cout << "Scanner is scanning a document" << endl;
    }
};

// Derived class
class AllInOne : public Printer, public Scanner {
public:
    void faxDocument() {
        cout << "AllInOne is faxing a document" << endl;
    }
};

int main() {
    AllInOne device;
    device.printDocument();  // Inherited from Printer
    device.scanDocument();   // Inherited from Scanner
    device.faxDocument();    // Method of AllInOne class
    return 0;
}

```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/c99ec357-c70a-4a54-8920-ee5f822fe79a)


## Program 3: Multilevel Inheritance
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
    void showDimensions() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }

protected:
    int width;
    int height;
};

// Derived class from Shape
class Rectangle : public Shape {
public:
    int area() {
        return width * height;
    }
};

// Derived class from Rectangle
class ColoredRectangle : public Rectangle {
public:
    void setColor(string c) {
        color = c;
    }
    void showColor() {
        cout << "Color: " << color << endl;
    }

private:
    string color;
};

int main() {
    ColoredRectangle myRectangle;
    myRectangle.setDimensions(5, 10);  // Inherited from Shape
    myRectangle.showDimensions();      // Inherited from Shape

    cout << "Area: " << myRectangle.area() << endl; // Inherited from Rectangle

    myRectangle.setColor("Blue");      // Method of ColoredRectangle class
    myRectangle.showColor();           // Method of ColoredRectangle class

    return 0;
}

```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/0172cc48-6ba4-4c2b-8108-337bf7328b6f)

## Program 4: Hierarchical Inheritance
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};
// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};
// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.eat();  // Inherited from Animal
    d.bark(); // Method of Dog class

    c.eat();  // Inherited from Animal
    c.meow(); // Method of Cat class
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/377f17fc-ada7-4a32-9174-f421c3cb5250)


## Conclusion:
From these programs, we learned the basic concepts of different types of inheritance in C++. Single inheritance allows a derived class to use the properties of one base class. Multiple inheritance enables a class to inherit from multiple base classes. Multilevel inheritance shows a hierarchy of classes, and hierarchical inheritance allows one base class to be inherited by multiple derived classes.

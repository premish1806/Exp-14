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

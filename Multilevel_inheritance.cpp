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

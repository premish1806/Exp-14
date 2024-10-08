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

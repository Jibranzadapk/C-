#include <iostream>
using namespace std;

int main() {
    // Different types of variables
    int myInt = 10;                // Integer (whole numbers)
    float myFloat = 3.14f;         // Floating point (decimal numbers)
    double myDouble = 3.14159265;  // Double precision decimal
    char myChar = 'A';             // Single character
    bool myBool = true;            // Boolean (true or false)

    // Printing the variables
    cout << "Integer value: " << myInt << endl;
    cout << "Float value: " << myFloat << endl;
    cout << "Double value: " << myDouble << endl;
    cout << "Character value: " << myChar << endl;
    cout << "Boolean value: " << myBool << endl;

    cout << endl; // line break

    // Printing memory size of each type
    cout << "Size of int: " << sizeof(myInt) << " bytes" << endl;
    cout << "Size of float: " << sizeof(myFloat) << " bytes" << endl;
    cout << "Size of double: " << sizeof(myDouble) << " bytes" << endl;
    cout << "Size of char: " << sizeof(myChar) << " byte" << endl;
    cout << "Size of bool: " << sizeof(myBool) << " byte" << endl;

    return 0;
}

// Introduction to pointers in C++

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a; // Pointer p holds the address of variable a

    cout << "Value of a: " << a << endl;           // Output the value of a
    cout << "Address of a: " << &a << endl;        // Output the address of a
    cout << "Value of p (address of a): " << p << endl; //
    cout << "Value pointed to by p: " << *p << endl; // Dereference p to get the value of a
}
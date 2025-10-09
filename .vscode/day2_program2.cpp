#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 3.14159;
    cout << "Default precision: " << pi << endl;

    // set precision to 2 decimal places
    cout << fixed << setprecision(2) << "Fixed precision: " << pi << endl;

    cout << setw(30) << "Number"<< endl;
    cout << setw(10) << pi << endl;

    return 0; 

}



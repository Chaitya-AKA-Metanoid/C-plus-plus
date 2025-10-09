#include <iostream>
using namespace std;

int main() {
    int num, reverse =0; 
    cout << "Program to reverse a number" << endl;
    cout << "--------------------------" << endl;

    cout << "Enter a number: ";
    cin >> num;

    while(num !=0){
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }

    cout << "Reversed Number: " << reverse << endl;
    return 0;
}


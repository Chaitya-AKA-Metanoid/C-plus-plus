#include <iostream>
using namespace std;

int main (){

    int num; 
    string name; 


    cout << "Enter a number: ";
    cin >> num;

    cin.ignore(); 
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Hello " << name << ", you entered the number " << num << endl;

    return 0;
}

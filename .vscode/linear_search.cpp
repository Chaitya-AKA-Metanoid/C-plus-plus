#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int element ;
    cout << "Enter element to search: ";
    cin >> element ;

    for(int i= 0; i<5; i++) {
        if (element == arr[i]) {
            cout << "Element found at position: " << i+1 << endl;
            break;}
        
        else{
            cout << "Element not found" << endl;
            break;
        }
  }
}
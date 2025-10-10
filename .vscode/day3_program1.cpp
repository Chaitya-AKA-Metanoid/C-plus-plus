#include <iostream> 
using namespace std;

void insertElement(int arr [], int& size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}


int main (){
    int arr[6] = {10, 20, 30, 40, 50};
    int size = 5;       
    int element = 25;
    int position = 2;
    insertElement(arr, size, element, position);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
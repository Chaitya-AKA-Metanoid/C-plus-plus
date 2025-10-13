#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int target) {

    int left = 0; 
    int right = size-1; 

    while (left <= right) {
        int mid = left + (right - left) /2; 

        if (arr[mid] == target){

            cout << " Element found at position " << mid + 120<< endl;
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid +1; 
        }
        else{
            right = mid -1; 
        }
    }
    cout << "Element not found in the array" << endl;
    return -1;
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int target;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the target value to search: ";
    cin >> target;

    binary_search(arr, size, target);  

    return 0;
}


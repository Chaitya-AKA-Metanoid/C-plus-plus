#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sortArray(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return 0;
}

int targetSum(vector<int>& arr, int target) {
    int left = 0;
    int sum = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            cout << "Target sum found between indexes " << left << " and " << right << endl;
            return 1;
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = arr.size();

    cout << "Enter the target sum: ";
    int target;
    cin >> target;

    sortArray(arr, n);
    if (targetSum(arr, target) == 0) {
        cout << "Target sum not found." << endl;
    }

    return 0;
}

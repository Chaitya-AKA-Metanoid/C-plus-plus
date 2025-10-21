#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int unique_elements(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    int uniqueCount = 1;
    int left = 0;

    cout << "Unique elements: " << arr[left] << " ";

    for (int right = 1; right < n; right++) {
        if (arr[left] != arr[right]) {
            uniqueCount++;
            cout << arr[right] << " ";
            left = right;
        }
    }
    cout << endl;

    return uniqueCount;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 4, 4, 5};
    sort(arr.begin(), arr.end());

    int uniqueCount = unique_elements(arr);
    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}

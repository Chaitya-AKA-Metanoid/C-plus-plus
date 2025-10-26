#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int smallestSubarrayWithSum(vector<int>& arr, int target) {
    int n = arr.size();
    int minLength = INT_MAX;
    int currSum = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        currSum += arr[end];
        
        while (currSum >= target) {
            minLength = min(minLength, end - start + 1);
            currSum -= arr[start];
            start++;
        }
    }

    return minLength == INT_MAX ? 0 : minLength;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;
    
    int result = smallestSubarrayWithSum(arr, target);
    
    cout << "Smallest subarray length with sum >= " << target << ": " << result << endl;
    
    return 0;
}
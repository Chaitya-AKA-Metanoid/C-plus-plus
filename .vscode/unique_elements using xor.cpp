#include<iostream>
#include<vector>
using namespace std;

int unique_elements(vector<int>& arr) {
    int ans = 0;
    for( int val : arr){
        ans ^= val;
            }
return ans;
        }

int main() {
    vector<int> arr = {1, 2, 3, 2, 1};
    cout << "The unique element is: " << unique_elements(arr) << endl;
    return 0;
}
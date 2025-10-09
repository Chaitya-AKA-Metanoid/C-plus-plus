#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n][n];
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right && num <= n * n; i++)
            arr[top][i] = num++;
        top++;

        for (int i = top; i <= bottom && num <= n * n; i++)
            arr[i][right] = num++;
        right--;

        for (int i = right; i >= left && num <= n * n; i--)
            arr[bottom][i] = num++;
        bottom--;

        for (int i = bottom; i >= top && num <= n * n; i--)
            arr[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }

    return 0;
}

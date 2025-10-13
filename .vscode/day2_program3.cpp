#include <iostream>
using namespace std;

// Function prototypes
void forloop();
void Whileloop();
void dowhileloop();

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "You are a child" << endl;
        return 1;
    } else {
        cout << "You are an adult" << endl;
    }

    cout << "\n--- For Loop Output ---" << endl;
    forloop();

    cout << "\n--- While Loop Output ---" << endl;
    Whileloop();

    cout << "\n--- Do-While Loop Output ---" << endl;
    dowhileloop();

    cout << "\nAll loops completed successfully." << endl;

    return 0;
}

void forloop() {
    for (int i = 0; i < 5; i++) {
        cout << "Iteration " << i << endl;
    }
}

void Whileloop() {
    int count = 0;
    while (count < 5) {
        cout << "Count is " << count << endl;
        count++;
    }
}

void dowhileloop() {
    int count = 0;
    do {
        cout << "Count is " << count << endl;
        count++;
    } while (count < 5);
}

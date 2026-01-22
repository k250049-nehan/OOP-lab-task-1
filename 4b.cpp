#include <iostream>
using namespace std;

void add(int *a, int *b);
void subtract(int *a, int *b);
void multiply(int *a, int *b);
void divide(int *a, int *b);

int main() {
    int x, y, choice;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout << "Enter choice: ";
    cin >> choice;

    int *p1 = &x;
    int *p2 = &y;

    switch (choice) {
        case 1: add(p1, p2); break;
        case 2: subtract(p1, p2); break;
        case 3: multiply(p1, p2); break;
        case 4: divide(p1, p2); break;
        default: cout << "Invalid choice\n";
    }

    return 0;
}

void add(int *a, int *b) {
    cout << "Result=" << (*a + *b) << endl;
}

void subtract(int *a, int *b) {
    cout << "Result=" << (*a - *b) << endl;
}

void multiply(int *a, int *b) {
    cout << "Result=" << (*a * *b) << endl;
}

void divide(int *a, int *b) {
    if (*b == 0) {
        cout << "Undetermined\n";
    } else {
        cout << "Result=" << (*a / *b) << endl;
    }
}
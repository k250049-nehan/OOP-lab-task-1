#include <iostream>
using namespace std;

int* createArray(int size) {
    int* arr = new int[size];  // will allocate memory for the inputted integers
    return arr;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* myArray = createArray(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> myArray[i];
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete[] myArray;

    return 0;
}
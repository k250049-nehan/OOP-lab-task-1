#include <iostream>
#include <string>
using namespace std;
struct Product {
    int id;
    string name;
    double price;
    int quantity;
    string category;
};
void addProduct(Product products[], int &count) {
    cout << "Enter Product ID:";
    cin >> products[count].id;
    cin.ignore();
    cout << "Enter Product Name:";
    getline(cin, products[count].name);
    cout << "Enter Price:";
    cin >> products[count].price;
    cin.ignore();
    cout << "Enter Quantity:";
    cin >> products[count].quantity;
    cin.ignore();
    cout << "Enter Category:";
    getline(cin, products[count].category);
    count++;
    cout << "Product added successfully!\n";
}
void displayProduct(Product products[], int count) {
    int id;
    cout << "Enter Product ID to display:";
    cin >> id;
    cin.ignore();
    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            cout << "\nProductID:" << products[i].id << endl;
            cout << "Name:" << products[i].name << endl;
            cout << "Price:" << products[i].price << endl;
            cout << "Quantity:" << products[i].quantity << endl;
            cout << "Category:" << products[i].category << endl;
            return;
        }
    }
    cout << "Product not found.\n";
}
void updateProduct(Product products[], int count) {
    int id;
    cout << "Enter Product ID to update:";
    cin >> id;
    cin.ignore();
    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            cout << "Enter new Name:";
            getline(cin, products[i].name);
            cout << "Enter new Price:";
            cin >> products[i].price;
            cin.ignore();
            cout << "Enter new Quantity:";
            cin >> products[i].quantity;
            cin.ignore();
            cout << "Enter new Category:";
            getline(cin, products[i].category);
            cout << "Product updated successfully!\n";
            return;
        }
    }
    cout << "Product not found.\n";
}
void removeProduct(Product products[], int &count) {
    int id;
    cout << "Enter Product ID to remove:";
    cin >> id;
    cin.ignore();
    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                products[j] = products[j + 1]; // shift left
            }
            count--;
            cout << "Product removed successfully!\n";
            return;
        }
    }
    cout << "Product not found.\n";
}
void displayAllProducts(Product products[], int count) {
    if (count == 0) {
        cout << "No products in the system.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "\nProductID:" << products[i].id << endl;
        cout << "Name:" << products[i].name << endl;
        cout << "Price:" << products[i].price << endl;
        cout << "Quantity:" << products[i].quantity << endl;
        cout << "Category:" << products[i].category << endl;
    }
}
int main() {
    Product products[50];
    int count = 0;
    int choice;
    do {
        cout << "\n--- Product Management System ---\n";
        cout << "1.Add Product\n";
        cout << "2.Display Product by ID\n";
        cout << "3.Update Product\n";
        cout << "4.Remove Product\n";
        cout << "5.Display All Products\n";
        cout << "6.Exit\n";
        cout << "Enter choice:";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: addProduct(products, count); break;
            case 2: displayProduct(products, count); break;
            case 3: updateProduct(products, count); break;
            case 4: removeProduct(products, count); break;
            case 5: displayAllProducts(products, count); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);
    return 0;
}
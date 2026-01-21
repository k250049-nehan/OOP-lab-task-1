#include <iostream>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    int year;
    string genre;
};
void displayBooks(Book books[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Year: " << books[i].year << endl;
        cout << "Genre: " << books[i].genre << endl;
    }
}
void searchBook(Book books[], int count) {
    string key;
    cout << "Enter title or author to search: ";
    getline(cin, key);
    for (int i = 0; i < count; i++) {
        if (books[i].title == key || books[i].author == key) {
            cout << "\nBook Found:\n";
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Year: " << books[i].year << endl;
            cout << "Genre: " << books[i].genre << endl;
            return;
        }
    }
    cout << "Book not found.\n";
}
void addBook(Book books[], int &count) {
    cout << "Enter title: ";
    getline(cin, books[count].title);
    cout << "Enter author: ";
    getline(cin, books[count].author);
    cout << "Enter year: ";
    cin >> books[count].year;
    cin.ignore(); //removes buffer
    cout << "Enter genre: ";
    getline(cin, books[count].genre);

    count++;
    cout << "Book added successfully.\n";
}
void updateBook(Book books[], int count) {
    string title;
    cout << "Enter title of book to update: ";
    getline(cin, title);
    for (int i = 0; i < count; i++) {
        if (books[i].title == title) {
            cout << "Enter new author: ";
            getline(cin, books[i].author);
            cout << "Enter new year: ";
            cin >> books[i].year;
            cin.ignore();
            cout << "Enter new genre: ";
            getline(cin, books[i].genre);
            cout << "Book updated successfully.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}
int main() {
    Book books[50];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: addBook(books, count); break;
            case 2: displayBooks(books, count); break;
            case 3: searchBook(books, count); break;
            case 4: updateBook(books, count); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice!=5);
    return 0;
}
#include "header.h"

using namespace std;
namespace bookstore {

// Book's print function
void Book::print(ostream& os) const {
    os << "Title: " << title << endl
       << "Author: " << author << endl
       << "ISBN: " << ISBN << endl
       << "Price: " << price << endl
       << "Stock: " << stock << endl;
}

// Overload operator << (Book's print function)
ostream& operator<<(ostream& os, const Book& book) {
    book.print(os);  // Calls print function (os)
    return os;
}

// Function to add new book to the inventory
void Bookstore::addBook(const Book& newBook) {
    for (const Book& book : inventory) {
        if (book.ISBN == newBook.ISBN) {
            cout << "Book with ISBN " << newBook.ISBN << " already exists in the inventory." << endl;
            return;
        }
    }
    inventory.push_back(newBook);
    cout << "Book \"" << newBook.title << "\" added to inventory." << endl;
}

// Function to find a book by ISBN and prints details
void Bookstore::findBook(const string& isbn) const {
    for (const Book& book : inventory) {
        if (book.ISBN == isbn) {
            cout << "Book is found in Inventory:\n" << book;
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " is not found in inventory." << endl;
}

}

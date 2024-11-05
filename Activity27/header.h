#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace bookstore {

struct Book {
    string title;
    string author;
    string ISBN;
    double price;
    int stock;

    Book(const string& t, const string& a, const string& i, double p, int s)
        : title(t), author(a), ISBN(i), price(p), stock(s) {}

    void print(ostream& os) const;
};

struct Bookstore {
    string name;
    string location;
    vector<Book> inventory;

    void addBook(const Book& newBook);

    void findBook(const string& isbn) const;
};

ostream& operator<<(ostream& os, const Book& book);

}

#endif

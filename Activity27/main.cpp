#include "header.h"

using namespace bookstore;

int main() {
    
    Bookstore berkeleyBookstore = {"Berkeley Bookstore", "2050 Center St"};

    // Sample Inputs (title/author/ISBN/price/stock)
    Book book1("Harry Potter and the Sorcerer's Stone", "J.K. Rowling", "1958375025212", 19.99, 10);
    Book book2("The Wizard of OZ", "L. Frank Baum", "1836593957355", 10.99, 5);
    Book book3("The Chronicles of Narnia", "Clive Staples Lewis", "1856293749385", 15.99, 1);

    berkeleyBookstore.addBook(book1);
    berkeleyBookstore.addBook(book2);
    berkeleyBookstore.addBook(book3);

    // Search function by ISBN
    berkeleyBookstore.findBook("1958375025212");
    berkeleyBookstore.findBook("1836593957355");
    berkeleyBookstore.findBook("9998887776665");

    return 0;
}

#include <iostream>

#include "book.h"

using namespace std;

Book::Book(){}
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn){}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getISBN() const {
    return isbn;
}

bool Book::getAvailability() const {
    return isAvailable;
}
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "Ahmed Deedat";
    book1.pages = 1500;

    Book book2;
    book2.title = "Lord of the rings";
    book2.author = "Daniel kruge";
    book2.pages = 1925;

    cout << book2.author << endl;
}

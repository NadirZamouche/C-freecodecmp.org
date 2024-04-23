#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;

    Book(){
        title = "no title";
        author = "no author";
        pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
    Book book1("Harry Potter", "Ahmed Deedat", 1500);
    Book book2("Lord of the rings", "Daniel kruge", 1925);
    Book book3;

    cout << book3.title;

    return 0;
}


/*class Book {
public:
    string title;
    string author;
    int pages;
    Book(){
        cout << "Creating Object" << endl;
    }
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

    return 0;
}
*/

/*class Book {
public:
    string title;
    string author;
    int pages;
    Book(string name){
        cout << name << endl;
    }
};
int main()
{
    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "Ahmed Deedat";
    book1.pages = 1500;

    Book book2("Lord of the rings");
    book2.title = "Lord of the rings";
    book2.author = "Daniel kruge";
    book2.pages = 1925;

    return 0;
}
*/

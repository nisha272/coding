#include <iostream>
using namespace std;

class Book {
public:
    string title;

    // Default constructor
    Book() {
        title = "No Title";
    }

    // Parameterized constructor
    Book(string t) {
        title = t;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
    }

    void display() {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b1;            // Default constructor
    Book b2("Harry Potter");  // Parameterized constructor
    Book b3(b2);        // Copy constructor

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
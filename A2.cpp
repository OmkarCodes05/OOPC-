#include <iostream>
#include <cstring>
using namespace std;

class book {
private:
    char* title;
    int pages;
    float price;

public:
    // Default Constructor
    book() {
        title = new char[1];
        title[0] = '\0';
        pages = 0;
        price = 0.0;
    }

    // Parameterized Constructor
    book(const char* t, int p, float pr) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        pages = p;
        price = pr;
    }

    // Copy Constructor
    book(const book& b) {
        title = new char[strlen(b.title) + 1];
        strcpy(title, b.title);
        pages = b.pages;
        price = b.price;
    }

    // Destructor
    ~book() {
        delete[] title;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Pages: " << pages << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    book book1; // Default Constructor Used
    book book2("C++", 120, 99.99); // Parameterized Constructor Used
    book book3 = book2; // Copy Constructor Used

    cout << "Default Constructor" << endl;
    book1.display();
    cout << endl;

    cout << "Parameterized Constructor" << endl;
    book2.display(); // No parameters needed
    cout << endl;

    cout << "Copy Constructor" << endl;
    book3.display();

    return 0;
}
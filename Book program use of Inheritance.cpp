#include <iostream>
using namespace std;

class Book {
    string isbn;
    string title;
    string author;
    float price;
    
public:
    Book(string _isbn, string _title, string _author, float _price)
        : isbn(_isbn), title(_title), author(_author), price(_price) {}

    void printInfo() const {
        cout << "ISBN: " << isbn << ", Title: " << title
             << ", Author: " << author << ", Price: " << price << endl;
    }
};
// Inheritance

class ElectronicBook : public Book {
    string url;
    float sizeMb;
    
public:
    ElectronicBook(string _isbn, string _title, string _author, float _price, string _url, float _sizeMb)
        : Book(_isbn, _title, _author, _price), url(_url), sizeMb(_sizeMb) {}

    void printInfo() const {
        Book::printInfo();
        cout << "URL: " << url << ", Size: " << sizeMb << " MB" << endl;
    }
};

// Inheritance

class PrintedBook : public Book {
    string publisher;
    int paperNum;
    
public:
    PrintedBook(string _isbn, string _title, string _author, float _price, string _publisher, int _paperNum)
        : Book(_isbn, _title, _author, _price), publisher(_publisher), paperNum(_paperNum) {}

    void printInfo() const {
        Book::printInfo();
        cout << "Publisher: " << publisher << ", Paper Number: " << paperNum << endl;
    }
};

int main() {
    Book b1("12345", "Book One", "Author A", 35.5);
    ElectronicBook b2("67890", "E-Book One", "Author B", 25.0, "http://www.example.com", 5.2);
    PrintedBook b3("11223", "Printed Book One", "Author C", 45.0, "Publisher X", 300);

    b1.printInfo();
    b2.printInfo();
    b3.printInfo();

    return 0;
}


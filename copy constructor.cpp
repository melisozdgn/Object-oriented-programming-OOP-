#include <iostream>
using namespace std;

class myN {
private:
    int N;    
public:
    // Default Constructor
    myN();
    // Constructor with a parameter
    myN(int n);
        
    // Copy Constructor
    myN(const myN &m);
    // Destructor
    ~myN();

    // Member function
    int getN();
    void setN(int y);
};

// Pass the object by value. Object is copied.
void test(myN u) {
    cout << u.getN() << endl;
} // u is destroyed here. It is a local variable created

myN testObj() {
    myN k(8);
    return k; // Object is returned by invoking copy constructor. k is destroyed.
}

int main() {
    myN u(7); // Overloaded Constructor

    myN p = u; // Copy constructor

    test(u); // Object is copied by copy constructor

    myN f = testObj(); // Object is returned by copy constructor

    cout << f.getN() << endl;
}

// Implementation of class methods
myN::myN() {
    cout << "Default Constructor\n";
    N = 0;
}

myN::myN(int n) {
    cout << "Overloaded Constructor\n";
    N = n;
}

myN::myN(const myN &m) {
    cout << "Copy Constructor\n";
    N = m.N;
}

myN::~myN() {
    cout << "Destructor...\n";
}

// Member functions
int myN::getN() {
    return N;
}

void myN::setN(int y) {
    N = y;
}

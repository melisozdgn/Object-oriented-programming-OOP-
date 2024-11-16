#include <iostream>
using namespace std;

class myNN {
private:
    int N; 
public:
    
    myNN(int a = 0) : N(a) {}

    // Getter 
    int getN() const {
        return N;
    }

    // Setter
    void setN(int a) {
        N = a;
    }

    //Operator overloading 
    friend myNN operator+(const myNN &c1, const myNN &c2);
    friend myNN operator-(const myNN &c1, const myNN &c2);
    friend myNN operator*(const myNN &c1, const myNN &c2);
    friend myNN operator/(const myNN &c1, const myNN &c2);

    //comparison operator
    friend bool operator==(const myNN &c1, const myNN &c2);
    friend bool operator!=(const myNN &c1, const myNN &c2);
    friend bool operator<(const myNN &c1, const myNN &c2);
    friend bool operator>(const myNN &c1, const myNN &c2);
    friend bool operator<=(const myNN &c1, const myNN &c2);
    friend bool operator>=(const myNN &c1, const myNN &c2);

    // Unary operator
    friend myNN operator-(const myNN &c);

    // Output (ostream) operator
    friend ostream &operator<<(ostream &myout, const myNN &k);

    // Input (istream) operator
    friend istream &operator>>(istream &myin, myNN &k);
};


myNN operator+(const myNN &c1, const myNN &c2) {
    return myNN(c1.N + c2.N);
}


myNN operator-(const myNN &c1, const myNN &c2) {
    return myNN(c1.N - c2.N);
}


myNN operator*(const myNN &c1, const myNN &c2) {
    return myNN(c1.N * c2.N);
}


myNN operator/(const myNN &c1, const myNN &c2) {
    if (c2.N == 0) {
        cout << "Error: Division by zero is not allowed.\n";
        return myNN(0); 
    }
    return myNN(c1.N / c2.N);
}


bool operator==(const myNN &c1, const myNN &c2) {
    return c1.N == c2.N;
}

bool operator!=(const myNN &c1, const myNN &c2) {
    return !(c1 == c2);
}

bool operator<(const myNN &c1, const myNN &c2) {
    return c1.N < c2.N;
}

bool operator>(const myNN &c1, const myNN &c2) {
    return c1.N > c2.N;
}

bool operator<=(const myNN &c1, const myNN &c2) {
    return c1.N <= c2.N;
}

bool operator>=(const myNN &c1, const myNN &c2) {
    return c1.N >= c2.N;
}

// Unary 
myNN operator-(const myNN &c) {
    return myNN(-c.N);
}

// Output 
ostream &operator<<(ostream &myout, const myNN &k) {
    myout << "{" << k.N << "}";
    return myout;
}

// Input 
istream &operator>>(istream &myin, myNN &k) {
    myin >> k.N;
    return myin;
}

int main() {
    myNN a1(5), a2(3);

    myNN c1 = a1 + a2;
    cout << "Addition: " << c1 << endl;

    myNN c2 = a1 - a2;
    cout << "Subtraction: " << c2 << endl;

    myNN c3 = a1 * a2;
    cout << "Multiplication: " << c3 << endl;

    myNN c4 = a1 / a2;
    cout << "Division: " << c4 << endl;

    cout << "Are a1 and a2 equal? " << (a1 == a2 ? "Yes" : "No") << endl;

    cout << "Enter a value for a1: ";
    cin >> a1;
    cout << "You entered: " << a1 << endl;

    return 0;
}
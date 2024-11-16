#include <iostream>
using namespace std;

class myNN {
private:
    int N; 
public:

    myNN(int a = 0) : N(a) {}

    // Copy constructor
    myNN(const myNN &c) {
        cout << "Copy constructor...\n";
        N = c.N; // Değeri kopyala
    }

    // Getter 
    int getN() const {
        return N;
    }

    // Setter 
    void setN(int a) {
        N = a;
    }

    myNN operator+(const myNN &c2) {
       
        return myNN(this->N + c2.N);
    }

    myNN operator-(const myNN &c2) {
        return myNN(this->N - c2.N);
    }

    myNN operator*(const myNN &c2) {
        myNN c(this->N * c2.N); 
        return c;
    }

    myNN operator/(const myNN &c2) {
        if (c2.N == 0) {
            cout << "Error: Division by zero is not allowed.\n";
            return myNN(0); 
        }
        return myNN(this->N / c2.N);
    }

    
    bool operator==(const myNN &c2) const {
        return this->N == c2.N;
    }

    bool operator!=(const myNN &c2) const {
        return !(this->N == c2.N);
    }

    bool operator<(const myNN &c2) const {
        return this->N < c2.N;
    }

    bool operator>(const myNN &c2) const {
        return this->N > c2.N;
    }

    bool operator<=(const myNN &c2) const {
        return this->N <= c2.N;
    }

    bool operator>=(const myNN &c2) const {
        return this->N >= c2.N;
    }

    // Unary operatörler
    myNN operator-() {
        return myNN(-this->N);
    }

    // Prefix ++
    myNN operator++() {
        return myNN(++this->N);
    }

    // Postfix ++
    myNN operator++(int) {
        myNN temp(*this); 
        this->N++;
        return temp; 
    }

    // Prefix --
    myNN operator--() {
        return myNN(--this->N);
    }

    // Postfix --
    myNN operator--(int) {
        myNN temp(*this); 
        this->N--;
        return temp; 
    }

    // Output (ostream) 
    friend ostream &operator<<(ostream &myout, const myNN &k) {
        myout << "{" << k.N << "}";
        return myout;
    }

    // Input (istream) 
    friend istream &operator>>(istream &myin, myNN &k) {
        myin >> k.N;
        return myin;
    }

    
    myNN &operator=(const myNN &r) {
        cout << "Assignment operator...\n";
        this->N = r.N;
        return *this; 
    }
};

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

    cout << "Prefix ++a1: " << ++a1 << endl;
    cout << "Postfix a1++: " << a1++ << endl;
    cout << "After postfix, a1: " << a1 << endl;

    return 0;
}

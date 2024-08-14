#include <iostream>
using namespace std;

template <class T>
class Polynomial {
    int degree;
    T* array;

public:
    // Default constructor
    Polynomial(){}

    // Parameterized constructor
    Polynomial(int degree, T* array) : degree(degree), array(new T[degree + 1]) {
        for (int i = 0; i <= degree; i++) {
            this->array[i] = array[i];
        }
    }

    // Destructor
    ~Polynomial() {
        delete[] array;
    }

    // Copy constructor
    Polynomial(const Polynomial<T>& other) : degree(other.degree), array(new T[other.degree + 1]) {
        for (int i = 0; i <= degree; i++) {
            array[i] = other.array[i];
        }
    }

    // Assignment operator
    Polynomial<T>& operator=(const Polynomial<T>& x) {
        if (this != &x) {
            delete[] array;
            degree = x.degree;
            array = new T[degree + 1];
            for (int i = 0; i <= degree; i++) {
                array[i] = x.array[i];
            }
        }
        return *this;
    }

    // Friend functions 
    template <class U>
    friend ostream& operator<<(ostream& cout, const Polynomial<U>& p);

    template <class U>
    friend istream& operator>>(istream& cin, Polynomial<U>& p);
};

template <class T>
ostream& operator<<(ostream& cout, const Polynomial<T>& p) {
    bool isPrinted = false;
    for (int i = p.degree; i >= 0; i--) {
        if (p.array[i] != 0) {
            if (isPrinted) {
                cout << "+";
            }
            cout << p.array[i] << "x^" << i;
            isPrinted = true;
        }
    }
    if (!isPrinted) {
        cout << "0";
    }
    cout << endl;
    return cout;
}

template <class T>
istream& operator>>(istream& cin, Polynomial<T>& p) {
    cout << "Enter degree of Polynomial: ";
    cin >> p.degree;
    delete[] p.array;  // Free previous memory
    p.array = new T[p.degree + 1];
    for (int i = p.degree; i >= 0; i--) {
        cout << "x^" << i << " coefficient: ";
        cin >> p.array[i];
    }
    return cin;
}

int main() {
    Polynomial<int> a, b;
    cout << "Input for polynomial a:" << endl;
    cin >> a;
    cout << "Input for polynomial b:" << endl;
    cin >> b;
    cout << "Polynomial a:" << endl;
    cout << a;
    cout << "Polynomial b:" << endl;
    cout << b;
    b = a;
    cout << "After assignment:" << endl;
    cout << b;
    return 0;
}

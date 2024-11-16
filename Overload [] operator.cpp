#include <iostream>
using namespace std;

class myArr {
private:
    int *N;  //pointer for dynamic memory allocation
    int len; 
public:
    myArr(int a = 10) : len(a) { 
        if (len > 0) { 
            N = new int[len]; // create of dynamic memory allocation
            for (int k = 0; k < len; k++) 
                N[k] = 0; // reset all elements
        }
        else {
            N = nullptr; 
        }
    }

    ~myArr() { 
        if (len > 0) { // If there is a valid array
            delete[] N; //Release dynamically allocated memory
        }
    }
//By overloading the [] operator, it allows accessing the elements of the array as if it were a normal array.
    int &operator[](int ind) { // Overload [] operotor 
        if (ind >= 0 && ind < len) { // A valid index check
            return N[ind]; // A valid index check
        }
        cout << "Error: Index out of bounds, returning reference to first element." << endl;
        return N[0]; 
    }
};

int main() {
    myArr arr1(40); 
    arr1[3] = 56; 
    cout << arr1[3] << endl; 

    return 0;
}

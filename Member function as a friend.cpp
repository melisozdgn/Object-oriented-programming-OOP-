#include <iostream>
using namespace std;

class myFloat; // early declaration for the compiler

class myInt{
private:
    int N;    
public:

    myInt():N(0){}
    
    myInt(int a):N(a){}
        
    double multiply(myInt m1, myFloat m2);
    
};
class myFloat{
  private:
    double D;
  public:
    myFloat():D(0) {}
    
    myFloat(double a):D(a){}
    
    //Member function as a friend
    friend double myInt::multiply(myInt m1, myFloat m2);
  
};

// Direct access to all private members of both classes.
double myInt::multiply(myInt m1, myFloat m2) {
    return m1.N * m2.D;
}

int main(){
  myInt num1(7);
  myFloat num2(3.4);
  
  // Call friend function
  cout<<num1.multiply(num1, num2) <<endl;
  
  return 0;
}


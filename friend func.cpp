#include <iostream>
using namespace std;

class pi{
  
  friend class Circle;
  
private:

  double valPi;
  
public:

  pi():valPi(3.1215926){}
  double getPi(){
    return valPi;
    
  }
};
class Circle{
private:

  double R;
  //A myP object of type pi is defined in the Circle class.
  pi myP; 

public:

  Circle():R(10){}
  
  double calcArea(){
    //Since the Circle class is a friend of the pi class, it can directly access the myP.valPi variable.
    return myP.valPi*R*R;
  }
};

int main(){
  Circle c;
  cout<<c.calcArea()<<endl;
  
  return 0;
}


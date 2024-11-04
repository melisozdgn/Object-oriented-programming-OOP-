#include <iostream>
using namespace std;

class myN{
  
private:
   int N;
public:
   myN(int a=4){
     N=a;
   }
// The setN function returns myN* as the return value (that is, it returns the this pointer).
   myN *setN(int N){
      this->N=N;
      return this;
   }
   
   void printThis(){
     cout<<"this:" <<this<<endl;
   }
   int getN(){
     return N;
   }

};

int main(){
  
  myN n;
  
  myN *p;  // a pointer variable
  
  //p is pointing to the address of n
  p=n.setN(34);
  cout<<p->getN()<<endl;
  
  //modfify the variable n using p
  p->setN(3);
  cout<<n.getN()<<endl;
  n.printThis();
  
  return 0;
}


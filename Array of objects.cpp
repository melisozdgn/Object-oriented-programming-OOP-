#include <iostream>
using namespace std;

class myN{
  private:
   int N;
  public:
   myN(){
     cout<<"Default constructor"<<endl;
   }
   myN(int n){
      cout<<"Overload constructor"<<endl;
   }
   ~myN(){
      cout<<"Destructor"<<endl;
   }
   int getN(){
     return N;
   }
   void setN(int y){
     N=y;
   }
};

// Array of objects 
int main(){
 //Default constructor is called 10 times 
 myN *p=new myN[10];
 p[0].setN(2);
 cout<<p[0].getN()<<endl;
 (p+1)->setN(4);
 cout<<(p+1)->getN()<<endl;
 
 //destructor is called 10 times
 delete [] p;
 
   
}   

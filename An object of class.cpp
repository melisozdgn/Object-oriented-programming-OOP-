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

int main(){
  //An object of class myN is created in memory, and its address is assigned to pointer p
  myN *p;
  p=new myN(); 
  p->setN(18);
  cout<< p->getN()<<endl;
  delete p;
   
}   

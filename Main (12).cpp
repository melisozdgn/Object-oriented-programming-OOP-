#include <iostream>
using namespace std;

class myN{
  
private:
   int N;
public:
   myN(int a=4){
     N=a;
   }
   void setN(int N){
  //Use pointer syntax or dereference it and use the normal syntax.
     this->N = N;
     // *(this).N=N;
   }
   void printThis(){
    cout<<"this:" <<this<<endl;
   }

};

int main(){
  myN n;
  
  n.setN(56);
  cout<<"address= "<<&n<<endl;
  n.printThis();
  
  return 0;
}


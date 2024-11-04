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

// array of pointers to objects 
int main(){
  
  //No constructor.It is an array of size 10 to keep objects pointers of thpe myN.
 myN **pp=new myN*[10];
 
 //It provides that a myN object is assigned to each element of the pp array and the destructor is called 10 times in a loop.
 for(int k=0;k<10;k++) pp[k]=new myN(); 
 pp[0]->setN(2);
 cout<<pp[0]->getN()<<endl;
 
 // diffirent syntax by  deferencing the pointer 
 //parantheses are needed so that * applies to the correct variable!!!
 (*pp[0]).setN(24);
 cout<<(*pp[0]).getN()<<endl;
 
 //This loop sequentially releases each myN object in the pp array from memory.
 for(int k=0;k<10;k++) delete pp[k]; //Destructor is called 10 times in a loop.
 
 delete []pp; //myN* releases the pointer array itself.
 

   
}   

#include <iostream>
using namespace std;

class myN{
  
private:
  int N;
public:
  myN(int a=4){
       N=a;
  }
   
  myN &setN(int N){
     
     this->N=N;
     return *this;
  }
  myN &add(int n){
   N+=n;
   return *this;
  }
  myN &sub(int n){
  N-=n;
  return *this;
  }
   
  myN &mul(int n){
  N*=n;
  return *this;}
  
  void printThis(){
   cout<<"this: "<<this<<endl;}
   int getN(){
  return N;}
};
int main(){
  myN n;
  n.setN(3).add(2).mul(2).sub(3);
  cout<<n.getN()<<endl;
  cout<<"address"<<&n<<endl;
  n.printThis();
  return 0;
}
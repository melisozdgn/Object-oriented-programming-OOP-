#include <iostream>
using namespace std;

class A{
    
    public:
    
    // Polymorphism
     virtual void f();  //virtual func
}; 
     

void A::f()
{
    cout<<"A"<<endl;
}
class B: public A  //// Inheritance
{
    public:
    
       void f(); // Overrides A::f()
       
};
void B::f(){
    cout<<"B"<<endl;
}

class C:public A   //// Inheritance
{
    public:
       void f();  // Overrides A::f()
    
};
void C::f()
{
    cout<<"C"<< endl;
}
int main()
{
    
    A* p= new B; 
    p->f();    //Polymorphism: Calls B::f() because f() is virtual
    p=  new C;
    p->f();   //Polymorphism: Calls C::f() because f() is virtual
    delete p;
    return 0;
}
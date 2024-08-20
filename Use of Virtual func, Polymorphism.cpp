#include <iostream>
using namespace std;

class A{
    
    public:
    A(){
        cout<<"A was created. ";
    }
    virtual ~A(){
        cout<<"A was deleted. "<<endl;
        system("pause");
    
    }
    
};

class B: public A
{
    public:
    B(){
        cout<<"B was created. ";
    }
    virtual ~B(){
        cout<<"B was deleted. "<<endl;
        system("pause");
        
    }
};

int main(){
    
    A *aPtr = new B();
    delete aPtr;
    return 0;
}   

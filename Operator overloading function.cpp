#include<iostream>
using namespace std;

class Box
{
    public:
        Box(int l, int w, int h):length(l),width(w),height(h){}
        friend bool operator>(const Box&, const Box&);
        friend bool operator<(const Box&, const Box&);
        double volume()const;
    
    private:
        int length;
        int width;
        int height;
};

bool operator>(const Box& b1, const Box& b2)   //Operator overloading function
{
    return b1.volume()>b2.volume();
}
bool operator<(const Box& b1,const Box& b2)   //Operator overloading function
{
    return b1.volume()<b2.volume();
}
double Box::volume() const
{
    return length*width*height;
}

int main(){
    Box b1(15,8,4), b2(3,7,8);
    if(b1>b2)
        cout<<"Box 1 is big."<<endl;
    else if (b1<b2)
        cout<<"Box 2 is big."<<endl;
    else
        cout<<"The box size are equal."<<endl;
    return 0;
}
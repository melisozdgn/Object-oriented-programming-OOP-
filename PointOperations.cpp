#include <iostream>
using namespace std;

class Point
{
    public:
        Point(int x=0,int y=0){
            setPoint(x,y);
        }
        void setPoint(int x,int y);
        Point operator+(Point &);
        Point operator+(int);
        void display();
    private:
    
       int x, y;
};
void Point::setPoint(int i, int j){
    x= i;
    y= j;
}
Point Point::operator+(Point &n)  //Operator function that adds point n to the point.
{    Point newPoint;
    newPoint.x= x + n.x;
    newPoint.y= y + n.y;
    return newPoint;
}
Point Point::operator+(int i)  //Operator function that adds value of i 
{
    x= x + i;
    y= y + i;
    return Point(x,y);
}
void Point::display()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
    Point n1(1,1), n2(4,4), n3;
    n1.display();
    n2.display();
    n3= n1 + n2;
    n3.display();
    n1= n1 + 8;
    n1.display();
    n3= n1 + n2 + 5;
    n3.display();
    return 0;
}
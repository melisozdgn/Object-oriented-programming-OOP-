#include<iostream>
using namespace std;

class Point{
    
    public:
    Point(int x=0, int y=0){
        setPoint(x,y);
    }
    void setPoint(int x, int y);
    friend Point operator+(const Point &, const Point &);
    friend Point operator+(const int i, const Point &);
    void display();
    
    private:
    int x, y;
};

void Point::setPoint(int i, int j)
{
    x=i;
    y=j;
}

Point operator+(const Point & n1,const Point & n2)
{
    Point newPoint;
    newPoint.x = n1.x + n2.x;
    newPoint.y = n1.y + n2.y;
    return newPoint;
}
Point operator+(const int i,const Point & n)
{
    int x = n.x + i;
    int y = n.y + i;
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
    n3 = n1 + n2;
    n3.display();
    n2= 13 + n2;
    n2.display();
    n3.display();
    return 0;
    
}
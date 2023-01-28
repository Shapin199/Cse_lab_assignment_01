#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    int a,b,c;
    triangle(int x,int y,int z)
    {
         a=x;
         b=y;
         c=z;
    }

    double  perimeter()
    {
        double perimeter=a+b+c;
        return perimeter;
    }
    double area()
    {
        int s=((a+b+c)/2);
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    ~triangle()
    {
        
    } 
    
};
int main()
{
    triangle obj1(3,4,5),obj2(3,4,5);
    cout<<obj1.perimeter()<<endl;
    cout<<obj2.area()<<endl;
}
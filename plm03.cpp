#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    int a,b,c;
    triangle()
    {
         a=3,b=4,c=5;
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
};
int main()
{
    triangle obj1,obj2;
    cout<<obj1.perimeter()<<endl;
    cout<<obj2.area()<<endl;

   return 0;
}
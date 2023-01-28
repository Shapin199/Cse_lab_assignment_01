/**
 *    author:  Mohammad Irtisum
 *    created: 27.01.2023        
**/
#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int l, b;
    Rectangle(int a, int r)
    {
        l = a;
        b = r;
    }
    int Area()
    {
        return l * b;
    }
};
int main()
{
    Rectangle obj1(4, 5),obj2(5,8);
    cout << obj1.Area() << endl;

    cout << obj2.Area() << endl;
    return 0;
}
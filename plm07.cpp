
/**
 *    author:  Mohammad Irtisum
 *    created: 29.01.2023        
**/
#include<bits/stdc++.h>
using namespace std;
class Area
{
    public:
    int len , breadth ;

    Area(int l, int b)
    {
        len = l;
        breadth = b;
    }

    int returnArea()
    {
        return len * breadth;
    }
};
int main()
{
   int m ,n;
   cin>>m>>n;
   Area shapin(m,n);
   
   cout<<shapin.returnArea();
}
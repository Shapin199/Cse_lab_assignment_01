/**
 *    author:  Mohammad Irtisum
 *    created: 27.01.2023        
**/
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        int roll_no;
        string phn_no;
        string name,adress;
};
int main()
{
    student shofi,jamshed;
    shofi.roll_no=19;
    shofi.name="Shofi";
    shofi.adress="Chattogram";
    shofi.phn_no="019******";

    jamshed.roll_no=31;
    jamshed.name="Jamshed";
    jamshed.adress="Chattogram";
    jamshed.phn_no="017******";


    cout<< shofi.roll_no << endl;
    cout << shofi.name << endl;
    cout<< shofi.adress << endl;
    cout<< shofi.phn_no << endl << endl;

    cout<< jamshed.roll_no << endl;
    cout << jamshed.name << endl;
    cout << jamshed.adress << endl;
    cout << jamshed.phn_no << endl;


    return 0;
}
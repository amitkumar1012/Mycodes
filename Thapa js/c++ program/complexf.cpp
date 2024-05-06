#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b; //instance member variables
    public:
        void setData(int x, int y) // x and y is local variables
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"a="<<a<<"b="<<b;
        }
};
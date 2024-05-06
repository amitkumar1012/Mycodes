#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;//instance member variables
        const int k;
    public:
        Complex():a(0),b(0),k(1)//initialization
        { } // {a=0;b=0;}
        Complex(int x):a(x),b(0),k(2)
        { }// {a=x;b=0;}
        Complex(int x ,int y, int k):a(x),b(y),k(k)
        { }//{a=x;b=y;}
        Complex(Complex &C):k(2)//copy constructor
        {
            a=C.a;
            b=C.b;
        }
        ~Complex(){}//Destructor
        // void setData(int ,int);
        void showData();
        Complex add(Complex);
};
// void Complex::setData(int x,int y)
// {
//     a=x;
//     b=y;
// }
void Complex::showData()
{
    cout<<"a="<<a <<"b="<<b<<"k="<<k<<endl;
   
}
Complex Complex::add(Complex c)
{
    Complex temp(0,0,0);
    temp.a=a+c.a;
    temp.b = b+c.b;
    return temp;
}

int main()
{
    Complex c1(1,2,10),c2(3),c3;
    Complex c4=c1;
    //c1.setData(3,5);
   // c2.setData(5,7);
    c3=c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    cout<<endl;
    return 0;
}

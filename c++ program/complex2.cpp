#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;

        public:
            void setData(int , int );
            void showData();
            complex add(complex);
            complex operator-(complex);
           
};
void complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void complex::showData()
{
    cout<<"\na="<<a<<" b="<<b;
}
complex complex::add(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}

complex complex::operator-(complex c)
{
    complex temp;
    temp.a=a-c.a;
    temp.b= b-c.b;
    return temp;



}

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1.add(c2);
    c3=c1-c2; // c
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}
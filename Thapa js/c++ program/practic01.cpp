#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:
       int  set_data(int x,int y);
       void  show_data();

};

int complex::set_data(int x, int y)
{
    a=x;
    b=y;
}
void complex::show_data()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}

int main()
{
    complex c1,c2;

    c1.set_data(5,5);
    c2.set_data(4,3);
    c1.show_data();
    c2.show_data();

    return 0;
}
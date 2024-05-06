#include<iostream>
using namespace std;

class complex
{
    private:
        int a,b;
    public:
        void setData(int,int);
        void getData();
        complex add(complex);
    
};
complex complex::add(complex c)
{
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
}
void complex::setData(int x, int y)
{
    a=x;
    b=y;
}
void complex::getData()
{
    cout<<"a="<<a<<endl<<"b="<<b;
}
int main()
{
    complex c1,c2,c3;
    c1.setData(3,5);
    c2.setData(5,6);
    c1.getData();
    cout<<endl;
    c2.getData();
    c3=c1.add(c2);
    c3.getData();
    return 0;
    

}
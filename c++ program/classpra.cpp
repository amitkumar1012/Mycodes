#include<iostream>
using namespace std;

class complex
{   
    private:
        int a,b;
    public:
        void complex::set_a(int m , int n)
            {
                { a=m,b=n;}
                    
            }
        
        void showdata()
            {
                cout<<"a="<<a <<endl <<"b="<<b;
            }


};



int main()
{
    complex b1,b2;
    // b1.a=45;
    // b1.b=53;
    // cout<<"a="<<b1.a <<"b="<<b1.b;
    b1.set_a(4,5);
    b2.set_a(10,30);
    b1.showdata();
    cout<<endl;
    b2.showdata();
    return 0;
}
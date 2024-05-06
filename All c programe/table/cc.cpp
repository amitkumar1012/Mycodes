#include<iostream>
using namespace std;
class A
{
    private:
        int a, b,c;
    public :
        A(int a , int b, int c):a(a),b(b),c(c){};
        
        A(int a, int b):a(a),b(b),c(0){};

        A():a(0),b(0),c(0){};

    void showdata();
};
 void A::showdata()
 {
    cout<<"a="<<a<<endl<<"b="<<b;
 }



int main()
{   
    A c1(5,6,7),c2(8,5),c3();
    c1.showdata();
    return 0;
}
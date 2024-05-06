#include<iostream>
using namespace std;
void f1();

int main()
{
    f1();
    f1();
    cout<<endl;
    return 0;
}

void f1()
{
    int x=5;
    static int y;
    x++;
    y++;
    cout<< "x="<<x <<endl<<"y="<<y;

}

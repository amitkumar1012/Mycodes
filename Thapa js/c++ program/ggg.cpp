#include<iostream>
using namespace std;
void swap(int* , int*);
int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;

    swap(&a,&b);
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}
void swap(int *p, int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}

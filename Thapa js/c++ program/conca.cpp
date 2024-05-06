#include<iostream>
using namespace std;

int main()
{
    int i,sum=0,a,b;
    cout<<"Enter a digit:";
    cin>>i;
    while(i>0)
    {
    int d= i%10;
    i= i/10;
    sum= sum+d;
    }
    cout<<sum;
    return 0;
    
}
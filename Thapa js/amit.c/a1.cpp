#include<iostream>
using namespace std;

int main()
{   
    int i, sum=0;   float avg; int a[10];
    cout<<"Enter 10 numbers:";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10;
    cout<<"Avarage is:"<<avg;
    return 0;


}
#include<iostream>
using namespace std;
int send(int[] , int);

int main()
{
    int a[10];
    int i;
    send(a,10);
    for(i=0;i<=9;i++)
    {
        cout<<a[i];
    }
    return 0;
}
 int send(int b[], int n)
{
    int i;
    cout<<"Enter"<<n<<"number";
    for(i=0;i<=9;i++)
    {
        cin>>b[i];
    }
    
    return b[i];
}
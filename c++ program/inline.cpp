#include<iostream>
using namespace std;
int add(int, int,int=0);
int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<< "sum is"<<add(a,b);

    int c;
    cout<<"Enter three number:";
    cin>>a>>b>>c;
    cout<<"sum is"<<add(a,b,c);
    return 0;
}

int add(int x, int y,int z)
{
    return x+y+z;
}
// int add(int x, int y)
// {
//     return x+y;
// }
// int main(){
//     cout<<"Hello\nMySirG";
//     float a,b,c;
//     cout<<"Enter three number:";
//     cin>>a>>b>>c;
//     float avg=(a+b+c)/3.0;
//     cout<<"avg is"<<avg;

//    int i, a[10], sum=0;
//    cout<<"Enter 10 number:";
//    for( i=0;i<=9;i++)
//    cin>>a[i];


//     for(i=0;i<=9;i++)
//     sum=sum+a[i];
//     cout<<a[i];
//     return 0;
// }
#include<iostream>

using namespace std;

int main()
{  
    int digit, sum=0,y;
    cin>>digit;

    while(digit>0)
    {
       y=digit%10;
       sum=sum+y;
       digit=digit/10;
    }
     cout<<sum;
    return 0;
}


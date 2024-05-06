#include<iostream>
using namespace std;
void input( int[], int);
int main()
{
    int a[10];
    input(a,10);
    return 0;
}
void input(int b[],int n)
{
    int i;
    cout<<"Enter n number"<<n;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
}

// include<iostream>
// using namespace st#d;

// // Function prototype
// void input(int[], int);

// int main()
// {
//     int a[10];
//     input(a, 10);
//     return 0;
// }

// void input(int b[], int n)
// {
//     int i;
//     cout << "Enter " << n << " numbers: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
// }

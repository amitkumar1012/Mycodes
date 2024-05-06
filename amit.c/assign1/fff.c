//  #include<stdio.h>
//  int main()
//  {
//  int a=-1,b=1,c=0,t;
//     // printf("Enter number");
//     // scanf("%d",&t);
//     for(int i=0; i<=10; i++)
//     {
//         c=a+b;
       
//         a=b;
//         b=c;
//     }
//      printf("%d\n",c);
//     return 0;
//  } 

#include<stdio.h>
void pp(int);
int main()
{
    int a=5,n;
    pp(5);
    return 0;    
}
void pp(int n)
{
    if(n==1)
    {
    printf("%d\n", n);
    pp(n+1-1);
    printf("%d\n",n);
    }
}
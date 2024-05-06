// #include<stdio.h>
// int main()
// {
//     int D,M,Y;
//     printf("Enter dd/mm/yyyy:");
//     scanf("%d/%d/%d",&D,&M,&Y);
//     printf("Day-%d,Month-%d,Year-%d",D,M,Y);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a, i;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     {
//         printf("%d",i);
//         i=i+2;
    
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=1,a=31;
//     // printf("Enter a number:");
//     // scanf("%d",&a);
//     while(a>=i )
//    { 
//     if(a%2)
//     {
//         printf("%d \n",a);
//         a=a-2;
//     }
//     else
//         a=a-1;
//         printf("%d \n",a);
//         a=a-2;
//    }
//    printf("\n");
//     return 0;

// }

//     int a,i=1;
//     printf("Enter number:");
//     scanf("%d",&a);
//     // while(a>=i)
//     // {   

//     //     printf("%d \n",i*i);
//     //     i++;
//     // }
//     // while(i<=10)
//     // {
//     //     printf("%d \n",a*i);
//     //     i++;

//     // }

// int a,i,s=0;
// printf("enter number:");
// scanf("%d",&a);
// for(i=1;i<=a;i=i++)
// {   
//     s=s+i;
// }
// printf("%d",s);
// int x=4,y;
// y=5>4&&x++;
// printf("%d %d",x,y);

// int a;
// printf("Enter a day number");
// scanf("%d",&a);
// switch(a)
//   {
//     case 1:
//       printf("have you nice day.");
//       break;
//     case 2:
//       printf("Welcom");
//       break;
//     case 3:
//       printf("Congrates");
//       break;
//     case 4:
//       printf("Good day");
//       break;
//     case 5:
//       printf("Most Welcom");
//       break;
//     case 6:
//       printf("Nice");
//       break;
//     case 7:
//       printf("Most Welcom to all");
//       break;
//       default :
//         printf("Invalid Number");

//   }
#include<stdio.h>
int main()
{
  int a,x,y;
  float p,q;
  while(1)
    {
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit.");
    printf("\nEnter Your choise:");
    scanf("%d",&a);
 
    
      switch(a)
      {
        case 1:
            printf("Enter two Number:");
            scanf("%d %d",&x,&y);
            printf(" sum is %d",x+y);
            break;
        case 2 :
            printf("Enter two Number:");
            scanf("%d %d",&x,&y);
            printf(" difference is %d",x-y);
            break;

        case 3:
            printf("Enter two Number:");
            scanf("%d %d",&x,&y);
            printf("%d",x*y);
            break;

        case 4:
            printf("Enter two Number:");
            scanf("%f%f",&p,&q);
            if(q!=0)
            printf("div is %f",p/q);
            break;
        case 5:
            break;

        default :
            printf("Invalid");
      }

    if(a==5)
      break;
  }  
   return 0;
  }

// #include<stdio.h>

// int main() {
//     int a, x, y;

//     while (1) {
//         printf("\n1.Addition");
//         printf("\n2.Subtraction");
//         printf("\n3.Multiplication");
//         printf("\n4.Division");
//         printf("\n5.Exit");
//         printf("\nEnter Your choice: ");
//         scanf("%d", &a);

//         switch (a) {
//             case 1:
//                 printf("Enter two Numbers: ");
//                 scanf("%d %d", &x, &y);
//                 printf("Sum is %d", x + y);
//                 break;
//             case 2:
//                 printf("Enter two Numbers: ");
//                 scanf("%d %d", &x, &y);
//                 printf("Difference is %d", x - y);
//                 break;
//             case 3:
//                 printf("Enter two Numbers: ");
//                 scanf("%d %d", &x, &y);
//                 printf("Product is %d", x * y);
//                 break;
//             case 4:
//                 printf("Enter two Numbers: ");
//                 scanf("%d %d", &x, &y);
//                 if (y != 0)
//                     printf("Quotient is %d", x / y);
//                 else
//                     printf("Cannot divide by zero");
//                 break;
//             case 5:
//                 return 0;
//             default:
//                 printf("Invalid choice");
//         }
//     }

//     return 0;
// }




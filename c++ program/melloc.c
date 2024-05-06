// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr= (int *) malloc (3 * sizeof(int));
//     for(int i=0;i<3;i++){
//         printf("Enter the value no %d of this array\n",i);
//         scanf("%d",&ptr[i]);
//     }

//     for (int i=0;i<3;i++)
//     {
//        printf("%d", ptr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int*) calloc(3 , sizeof(int) );

   
//     for(int i=0;i<3;i++)
//     {   
//          printf("Enter the three value:");
//         scanf("%d",&ptr[i]);
//     }
    
//     for(int i=0;i<3;i++)
//     {
//         printf("The values is %d\n",ptr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    ptr= (int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("Enter the %d values:",n);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The value is %d: \n",ptr[i]);
    }
    //use realloc
    
    printf("Enter new size we want to create new size:");

    return 0;
}
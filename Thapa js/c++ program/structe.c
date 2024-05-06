#include<stdio.h>
#include<string.h>

struct Book
{
    int bookid;
    char title[20];
    float price; 
};

struct Book input()
{
    struct Book b;
    printf("Enter book id , title and price");
    fflush(stdin);
    scanf("%d",&b.bookid);
    fgets(b.title,20,stdin);
    //b.title(strlen(b.title)-1)='\0';//some error this line
    scanf("%f",&b.price);
    return b;
}

void display(struct Book b)
{
    printf("\n%d %s %f ",b.bookid,b.title,b.price);
}


int main()
{
    struct Book b1={1,"C in depth ", 350.2};
    struct Book b2,b3;
    b2.bookid=2;
    // b2.title="Java"; this is error
    strcpy(b2.title,"Java");//this is true 
    b2.price=400.0;
    b3=input();
    display(b1);
    display(b2); 
    display(b3);
    printf("\n");

    return 0;
}
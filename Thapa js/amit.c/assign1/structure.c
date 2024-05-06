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
    printf("Enter id , title and price");
    scanf("%d",&b.bookid);
    fflush(stdin);
    fgets(b.title,20,stdin);
    b.title[strlen(b.title)-1]='\0';
    scanf("%f",&b.price);
    return b;
}

void display(struct Book b)
{
    printf("\n%d %s %f",b.bookid,b.title,b.price);
}
int main()
{

    struct Book b1 = {1,"c in Depth", 350.0};
    struct Book b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"Java");
    b2.price = 400.0;
    b3=input();
    display(b1);
    display(b2);
    display(b3);

    return 0;
}
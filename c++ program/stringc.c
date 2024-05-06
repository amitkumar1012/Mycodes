#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter name:");
    fgets(str,20,stdin);

    str[strlen(str)-1]='\0';
    int i= strlen(str);
    printf("%d",i);
    return 0;
}
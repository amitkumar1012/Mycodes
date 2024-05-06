#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;

};

struct Book innputBook();
void displayBook(struct Book);

int main()
{
    struct Book b1= ( 1,"Drilling c",345.0),b2;
    struct Book b3;
    b2.bookid=2;
    strcpy(b2.title,"hello World");
    b2.price=233.0;
    b3.inputBook();
    displayBook(b3);



}
  void displayBook(struct Book b)
{
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}

struct Book inputBook()
{
    struct Book b;
    cout<<"Enter bookid, title and price:";
    cin>>b.bookid;
    // fflush(stdin);
    cin.ignore();
    // fgets(b.title,20,stdin);
    cin.getline(b.title,20);
    cin>>b.price;
    return b;


}

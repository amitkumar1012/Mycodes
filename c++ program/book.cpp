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

struct Book inputBook();
void displayBook(struct Book);
 int main()
 {
    struct Book b1={1,"Drilling C", 345.0},b2;
    struct Book b3;
    b2.bookid=2;
    strcpy(b2.title,"hello World");
    b2.price=443.4;
    b3=inputBook();
    displayBook(b3);
    return 0;
 }

  struct Book inputBook()
 {
    struct Book b;
    cout<<"Enter Bookid, title and price:";
    cin>>b.bookid;
    // fflush(stdin); in c language
    cin.ignore(); // in c++
    // fgets(b.title,20,stdin); in c language
    cin.getline(b.title,20); // in c++
    cin>>b.price;
    return b;

 }

void displayBook( struct Book b)
 {
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
 }

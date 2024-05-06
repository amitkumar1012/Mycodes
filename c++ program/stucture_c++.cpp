#include<iostream>
#include<string.h>
using namespace std;

struct Book 
{   
    private:
        int  bookid;
        char title[20];
        int  price;

    public:
    void displayBook()
    {
        cout<<bookid <<" " <<title<<" " <<price<<endl;
    }
    void inputBook()
    {
        cout<<"Enter bookid, title and price: ";
        cin>>bookid;
        if(bookid<0)
             bookid= -bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
    }

};

int main()
{
    Book b1;
    Book b3,b2;
    b3.inputBook();
    b3.displayBook();
    
    return 0;
}
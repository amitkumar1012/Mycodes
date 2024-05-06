#include<iostream>
using namespace std;
int main ()
 {
   
   int i;
   cout<<"Enter a number:";
   cin>>i;
      switch (i)
   {
   case 1:
     cout<<"1";
    break;
    case 'a':
     cout<<"2";

    case 3:
     cout<<"3";
    break;
    case 4:
     cout<<"4";
   
    case 5:
     cout<<"5";
  
   break;

   default:
   cout<<"please enter valid.";

   }
   return 0;
 }
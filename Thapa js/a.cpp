// #include<iostream>
// using namespace std;

// class fun
// {
//     private:
//         int  a,b;
//         static int k ;

//     public:
//         void set_a(int x){a=x;}
//         void set_b(int y){b=y;}
//       static  void set_k(int p){k=p;}
//         int get_a(){return a;}
//         int get_b(){return b;};
//        static int get_k(){return k; };      

// };
// int fun::k;

// int main()
// {
//     fun c1,c2;
//     c1.set_a(20);
//     c1.set_b(30);
//     cout<<c1.get_a();
//     cout<<c1.get_b();
//     fun::set_k(100);
//     cout<<"k="<<fun::get_k();
//     return 0;
// }

// #include <iostream>

// // Importing the entire std namespace
// using namespace std;

// int main() {
//     int i=0;
//   do{
//     cout<<"abhi";
//     i++;
//   }while(i<5);
//   cout<<i;
//    return 0;
//    }
   

   

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;



}



int main(){

    
    int a=12;
    int b=6;

    // int *p=a;

swap(&a,&b);
    
    cout<<"a="<<a<<"b="<<b;
    return 0;
        }

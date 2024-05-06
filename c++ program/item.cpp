#include<iostream>
using namespace std;

//pubic 
// class Item
// {   
//     public:
//     int a,b; // Instance Variables or object ke member  
//     static int k;//static member variable ya class variable
// };
// int Item::k; //defining static member variable
// int main()
// {   
//     Item i1,i2;
//     i1.a=5;
//     cout<<i1.a;
//     cout<<endl;

//     i1.k=10;
//     cout<<"k="<<i2.k;
//     cout<<endl;
//     Item::k=10; //static variable access without object
//     cout<<"k="<<Item::k;


//private
class Item
{   
    private:
        int a,b; // Instance Variables or object ke member  
        static int k;//static member variable ya class variable
    public:
      /*  void set_a(int x) { a=x; }//Instance Method
        void set_b(int y) { b=y; }//Instance Method
        int get_a() { return a;  }//Intance Method
        int get_b() { return b;  }//Intance Method */
        static void set_k( int m ) { k=m; }//static method
        static int get_k() { return k; }//staitc method
};
int Item::k; //defining static member variable
int main()
{ 
    // Item i1,i2;
    // i1.set_a()
    // cout<<i1.a;
    // cout<<endl;
    // i1.k=10;
    // cout<<"k="<<i2.k;
    // cout<<endl;
    // Item::k=10; //static variable access without object
    // cout<<"k="<<Item::k;

    Item::set_k(10);
    cout<<"k=" <<Item::get_k();

    return 0;  
}
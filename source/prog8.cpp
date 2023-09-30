#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=45;
    // cout<<"The value of a was: "<<a<<endl;
    // a=54;
    // cout<<"The value of a is : "<<a<<endl;
    /* Here the value of a is changed but if we want that the value
    of a does not change then we should use constants */ 
    
   /* const int a =  44;
    cout<<"The value of a is "<<a<<endl;
    // a = 45 ;   ---> here it will creat error as we already define the constant a 
    cout<<"The value of a is "<<a<<endl; */

   /*int a = 4, b = 34, c = 456 ;
    cout<<"The value of a is"<<setw(4)<<a<<endl;  // setw is manipulator by adding the new header file 'iomanip' 
    cout<<"The value of b is"<<setw(4)<<b<<endl;  // setw basically creates the gap 
    cout<<"The value of c is"<<setw(4)<<c<<endl;


    cout<<"The value of a without setw  is"<<a<<endl;
    cout<<"The value of b without setw  is"<<b<<endl;
    cout<<"The value of c without setw  is"<<c<<endl; */

    // Operator presedence
    int a = 3, b = 5;
   int c = ((((a*5) + b) - 85) + 48) ; //-----> make them in bracket according to the table given at cpp site about presedence
   
    cout<<c;


    return 0;
}
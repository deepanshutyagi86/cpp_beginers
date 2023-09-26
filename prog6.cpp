// There are two types of header files:
//1. System header files: It comes with compiler 
#include<iostream>
//2. User define header files: It is written by the programmer 
#include "this.h" //---> this will produce an error if this.h not present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"operators in c++:"<<endl; // this also jump us in new line 
    cout<<"Following are the operators in c++:"<<endl; 
    // Arithtic operators
    cout<< "The value of a + b is "<<a+b<<endl;
    cout<< "The value of a - b is "<<a-b<<endl;
    cout<< "The value of a * b is "<<a*b<<endl;
    cout<< "The value of a / b is "<<a/b<<endl;
    cout<< "The value of a % b is "<<a%b<<endl;
    cout<< "The value of a++ is "<<a++<<endl;
    cout<< "The value of a-- is "<<a--<<endl;
    cout<< "The value of ++a is "<<++a<<endl;
    cout<< "The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment operators --> used to assign values to variables
    //int a =3, b =9;
    //char d ='d';

    // comparison operators
    cout<<"Following are the comparison operators in c++"<<endl; 
    cout<<"The value of a == b is "<<(a==b)<<endl; 
    cout<<"The value of a > b is "<<(a>b)<<endl; 
    cout<<"The value of a < b is "<<(a<b)<<endl; 
    cout<<"The value of a <= b is "<<(a<=b)<<endl; 
    cout<<"The value of a >= b is "<<(a>=b)<<endl; 
    cout<<"The value of a != b is "<<(a!=b)<<endl; 
    cout<<endl;

    // Logical operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of AND logical operator  ((a==b) && (a>b)) is "<<((a==b) && (a>b))<<endl;  
    cout<<"The value of OR logical operator ((a<b)||(a>=b)) is "<< ((a<b) || (a>=b))<<endl; 
    cout<<"The value of NOT logical operator (!(a>b))is "<<(!(a>b))<<endl; 
    
    return 0;
}


#include<iostream>
using namespace std;

int c= 45;

int main(){
    // ***************Build in data types**************
//int a,b,c;
//cout<<"Enter the value of a"<<endl;
//cin>>a;
//
//cout<<"Enter the value of b"<<endl;
//cin>>b;

//c=a+b;

//cout<<"The sum is c: "<<c<<endl; 
//cout<<"The global c is: "<<::c<<endl; 

// *************** Float, doubl and long double literals **************
//float d=34.4f;
//long double e=34.4l;
//cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
//cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
//cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
//cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
//cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
//
//cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;

// ********** Reference Variables **********
// Deepanshu -------> Dishu ------->   Tyagu 
//float x = 445;
//float & y = x;
//cout<<"The value of x is: "<<x<<endl;
//cout<<"The value of y is: "<<y<<endl;


// ************* Typecasting **********
int a = 445;
float b = 44.53;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is "<<float (a)<<endl;

cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;

int c = int(b);
cout<<"The value of c is : "<<c<<endl;

cout<<"The expression of a+b:\n "<<a+b<<endl;
cout<<"The expression of a+ int(b): "<<a+int(b)<<endl;
cout<<"The expression of a+ (int)b: "<<a+(int)b<<endl;



    return 0;
}
#include<iostream>
using namespace std;

int main(){

/* 
 Loops in c++ :
There are three types of loops in C++:
  1. For loop
  2. While loop
  3. do-while loop
*/


// For loop in c++
/* syntax of For loop 
for(initialisation; condition; updation)
{
    for loop body(C++ code)
}
*/

//for(int i=1; i<20; i++)
//{  
//    cout<<i<<endl; }
    
    // Example of infinite for loop

   /* for(int i=1; i<10; i++){
        cout<<i<<endl;
    }
    */




   /* While loop in C++ */
   //syntax:
  /* while(condition):
   {
    c++ statement;
   }  */

  /* int i=1;
   while(i<=39){
    cout<<i<<endl;
    i++;
   }
*/

// Example of infinite while loop:
  
  /*int i=1;
  while(true)
  {
    cout<<i<<endl;
    i++;
  }
  */

 // do-while loop in C++
 /* syntax:
    do{
        c++ statement
    }while(condition)*/

    int i=1;
    do{
        cout<<i<<endl;
        i++;

    }while(false);
  


 


    return 0;
}
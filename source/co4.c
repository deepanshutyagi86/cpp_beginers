#include<stdio.h>

int main(){
    int a,b,c;
     
     printf("Enter any value of a,b,c" );
     scanf("%d %d %d", &a, &b, &c);

     if ((a>b) && (b>c)) {
     printf("The largest number is : %d\n", a);
     }

     else if ((b>a) && (a>c)) {
     printf("The largest value is : %d\n", b);
     }

     else {
     printf("The largest value is : %d", c);
     }

     return 0;
     }





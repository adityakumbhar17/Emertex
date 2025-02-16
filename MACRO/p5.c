//Write a macro SQUARE(x) that returns the square of x.
//  here use the functon like macro .
#include<stdio.h>
#define SQUARE(x)  x*x 
int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("The Square of the %d is %d",x,SQUARE(x));
}


/* 
Name Aditya shivaji kumbhar
Description-In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two
Sample execution-
Enter a number: -8
0, 1, -1, 2, -3, 5, -8

Date-10-09-2024
*/

#include <stdio.h>

void negative_fibonacci(int, int, int, int);                     //declaring prototype of the function

int main()
{
    int limit;                                                            //declaring a variable
    
    printf("Enter the limit : ");
    scanf("%d", &limit);                                              //taking input from user
    if(limit>0)                                                  //putting condition to check if the number is +ve or -ve
    printf("Invalid input");                                              //printing output according to the above condition
    else
    negative_fibonacci(limit, 0, 1, 0);                          //callingg the function if above condition doesn't matches
}
void negative_fibonacci(int num, int first, int second, int next)         //declaring the function
{
    first=second;                                                     //assining some values
    second=next;
    if(second<=-num)                                             //putting condition
    printf("%d, ",second);                                                //printing output
    next=first-second;
    if(next>=num)                                                     //putting condition for calling the function again
    negative_fibonacci(num,first,second,next);                   //calling the function again
}

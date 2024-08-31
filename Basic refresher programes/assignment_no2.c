/*
Description:

• In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .

• By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the sum of the previous two

Pr-requisites:-

• Loops

• Operators

Objective: -

To understand the concept of

◦ Continuos looping.

◦ If-else constructs

Inputs: -
A integer say 'N' 
Sample execution: -

Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: 8
0 1 1 2 3 5 8

Test Case 2:
Enter a number: 10
0 1 1 2 3 5 8

Test Case 3:
Enter a number: 21
0 1 1 2 3 5 8 13 21

Test Case 4:
Enter a number: -21
Invalid input
*/
/*
Name: Aditya shivaji kumbhar
Description : WAP to generate Fiboacci number
Date : 22-07-2024
sample output : Enter a number: 8
                0 1 1 2 3 5 8
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int fn=0;
    int sn=1;
    int nextterm=0;
    if(num<0)
    {
        printf("Invalid input");
    }
    else
    {
     while(nextterm<=num)
      {
        printf("%d ",nextterm);
        fn=sn;
        sn=nextterm;
        nextterm=fn+sn;
      }
    }
}
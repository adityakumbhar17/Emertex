/* 
Name- Aditya shivaji kumbhar
Date-22-08-2024;
description- WAP to find factorial of given number using recursion
Sample Execution:
Enter the value of N : 7
Factorial of the given number is 5040
*/
#include<stdio.h>
int factonum(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    return n*factonum(n-1);
}
int main()
{
    int num;
   // printf("Enter the value of N : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid Input");
    }
    else
    {
    int ans=factonum(num);
    printf("Factorial of the given number is %d",ans);
    return 0;
    }
    
}

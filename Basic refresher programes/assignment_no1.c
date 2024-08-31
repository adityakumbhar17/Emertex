/*
Description:
• The user entered number should identified whether its a odd or a even number. Mention its sign too.
Pr-requisites:-
• Arithmetic Operators
• Nested if-else construct

Objective: -
• To understand the concept of Nested if-else

Inputs: -
Integer 'N'. 

Sample execution: -
Test Case 1:
user@emertxe] ./even_odd
Enter the value of 'n' : -2
-2 is negative even number

Test Case 2:
Enter the value of 'n' : 2
2 is positive even number

Test Case 3:
Enter the value of 'n' : 0
0 is neither odd nor even
*/
/* Name: Aditya Shivaji kumbhar
Description : The user entered number should identified whether its a odd or a even number.mention its sign too
Date: 22-07-2024
sample ouyput : Enter the value of 'n': 2
                2 ispositive even number
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of 'n' : ");
    scanf("%d",&n);
    if(n<0)
    {
        if(n%2==0)
        {
            printf("%d is negative even number",n);
        }
        else
        {
            printf("%d is negative odd number",n); 
        }
    }
    else if (n>0)
    {
         if(n%2==0)
        {
            printf("%d is positive even number",n);
        }
        else
        {
            printf("%d is positive odd number",n); 
        }
        
    }
    else
    {
        printf("0 is neither odd nor even");
    }
    
}
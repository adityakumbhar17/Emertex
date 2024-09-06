
/*
Name- Aditya shivaji kumbhar
Date-21-08-2024
description-WAP to check whether a given number is prime or not using function.
Sample Execution:
Enter a number: 2
2 is a prime number
*/
#include <stdio.h>

int is_prime(int);

int main()
{
    int num;       
    //printf("Entert a number: ");
    scanf("%d",&num);      //Read a number from user.
    if(num<0)
    {
        printf("Invalid input");
        return 1;
    }
    
    int ans=is_prime(num);  //Pass the number to the function is_prime().
    if(ans==2)
    {
        printf("Invalid input");
    }
    if(ans==1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;
}
int is_prime(int num)
{

    int temp=0;
    for(int i=2;i*i<=num;i++)  //Check the number is prime or not in the function.
    {
        if(num%i==0)
        {
            temp++;
            break;
        }
    }
    if(num==-2)
    {
        
        return 2;
    }
    if(temp==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}



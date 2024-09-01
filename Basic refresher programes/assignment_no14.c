/*
check the number is prime or not
*/
#include <stdio.h>

int main()
{
    //Write logic to check the given number is prime or not
    int num;
   // printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid input");
    }
    else
    {
    int flag=0;
    for(int i=2;i*i<=num;i++)
    {
     if(num%i==0)
     {
         flag=1;
         break;
     }
    }
    if(flag==0)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);   
    }
    }
}

/*
Name- Aditya shivaji kumbhar
Description-WAP to generate fibbonacci numbers using recursion
Date -21-8-2024
Sample input-Enter a number: 8
Sample output- 0, 1, 1, 2, 3, 5, 8
*/
#include<stdio.h>
int fibonum (int n)
{
    //base case 
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    //recrsive function
    return fibonum(n-1)+fibonum (n-2);
}
int main()
{
    
    int n,nextnum=0;
    //printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf(" Invalid input");
    }
    for(int i=0;nextnum<=n;i++)
    {
        nextnum=fibonum(i);
        if(nextnum>n)
        {
            break;
        }
        printf("%d,",nextnum);
    }
    
}

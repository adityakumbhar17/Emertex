/*
Name- Aditya shivaji Kumbhar
Date-03-09-2024.
Description:-WAP to count number of set bits in a given number and print parity
sample execution:-
Enter the number : 7
Number of set bits = 3
Bit parity is Odd
*/
#include<stdio.h>
int main()
{
    int num,b_num [31];
    int k=0;
    int count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=31;i>=0;i--)
    {
        if(num & (1<<i))
        {
            b_num[k]=1;
            k++;
        }
        else
        {
            
        b_num[k]=0;
        k++;
        
        }
    }
   for(int j=0;j<k;j++)
   {
       if(b_num[j]==1)
       {
           count++;
       }
   }
   printf("Number of set bits = %d\n",count);
   
   if(count%2==0)
   {
       printf("Bit parity is Even");
   }
   else
   {
       printf("Bit parity is Odd");
   }
    
}

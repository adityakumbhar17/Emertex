/*
Name -Aditya shivaji kumbhar
Description-
Read a number, M and N from the user. You need to check whether N th bit is set(1) or not, If yes, then you need to clear the M th bit of the number and print the updated value of num
Date-04-05-2024
Sample execution-
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
*/


#include<stdio.h>
int main()
{
    int num,n,m;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter 'N': ");
    scanf("%d",&n);
    printf("Enter 'M': ");
    scanf("%d",&m);
    
    if(num&(1<<n))
    {
        num=num&~(1<<m);
    }
    printf("Updated value of num is %d",num);
}

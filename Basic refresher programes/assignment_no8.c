/*
Description:

Read a number from user. Let's say if number is 5, you need to print numbers in pyramid pattern as shown below:
If n = 5, then,
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
Note:- Please consider '_' as space. You need to leave space between 2 numbers
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
       for(int j=i;j<=n;j++)
       {
           printf("%d ",j);
       }
         printf("\n");
    }
    
    for(int i=2;i<=n;i++)
    {
       for(int j=i;j<=n;j++)
       {
           printf("%d ",j);
       }
         printf("\n");
    }
  
    
}

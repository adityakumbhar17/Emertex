#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the n: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid input ....");
        
    }
    int i=1,count=1;
    while(count<=n)
    {
        printf("%d",i);
        sum=sum+i;
        i=i+2;
        count++;
    }
    printf("THe sum of the odd number are. : %d",sum);
}

//WAP to finde the gratest common deviser by using the funtion
#include<stdio.h>
int calculate_gcd(int num1,int num2)
{
    //check which num is smaller
    int small;
    if(num1<num2)
    {
        small=num1;
    }
    else
    {
        small=num2;
    }
    for(int i=small;i>0;i--)
    {
        
            if((num1%i==0)&&(num2%i==0))
            {
                return i;
            }
      
    }
    return 0;
}
int main()
{
    int  num1 ,num2,gcd=1;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the secon number: ");
    scanf("%d",&num2);
    gcd=calculate_gcd(num1,num2);
    printf("The gratest common deviser is %d",gcd);
    
}

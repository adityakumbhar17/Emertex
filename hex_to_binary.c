#include<stdio.h>
int main()
{
    int hex;
    printf("Enter your hex value: ");
    scanf("%X",&hex);
    printf("binary value for your hex value is : \n");
    for(int i=31;i>=0;i--)
    {
        int bit=(hex>>i)&1;// here we conver the hex value  to the binary valuee
        printf("%d",bit);
    }
}

//write the program to find the string length is prime or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str[70];
    printf("Enter the string :\n");
    scanf("%[^\n]",str);
    int flag=0;
    int l=strlen(str);
    for(int i=2;i*i<l;i++)
    {
        if(l%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The length of the string is prime");
    }
    else
    {
        printf("The length of the string is not prime");
    }
}

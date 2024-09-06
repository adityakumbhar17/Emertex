#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int flag=0;
    printf("Enter the string\n");
    scanf("%[^\n]",str);
    int length=strlen(str);
    for(int i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Palandrom");
        
    }
    else
    {
        printf("Not palandrom");
    }
}

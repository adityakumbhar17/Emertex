//reverse the string each word
#include<stdio.h>
#include<string.h>
int main()
{
    char str[60];
    printf("Enter the string :\n");
    scanf("%[^\n]",str);
    int l=strlen(str);
    for(int i=0;i<l/2;i++)
    {
        char temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
   
       puts(str);
}

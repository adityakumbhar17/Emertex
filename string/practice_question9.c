//code for deleting the  0th index from string 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    scanf("%[^\n]",str);
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        str[i]=str[i+1];
    }
    puts(str);
}

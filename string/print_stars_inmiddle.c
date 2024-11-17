//write a code to print* in the middle index and if te length of the string is even the print double star
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int i=0,even=0;
    if(len%2==0)
    {
        even=1;
    }
    while(str[i]!='\0')
    {
        if(even==1)
        {
            str[len/2-1]='*';
            str[len/2]='*';
            
        }
        else
        {
            str[len/2]='*';
        }
        i++;
        
    }
    puts(str);
}

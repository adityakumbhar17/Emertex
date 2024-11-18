#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    printf("Enter the string from the user.");
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
               if(str[j]>str[j+1])
            {
                char temp=str[i];
                str[j]=str[j+1];
                str[j+1]=temp;
            } 
        }
        
    }
    puts(str);
}

//the code is for deleting the numbers from the  string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    scanf("%[^\n]",str);
    int length=strlen(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
           for(int j=i;str[j]!='\0';j++)
           {
               str[j]=str[j+1];
               
           }
        }
        else
        {
            i++;
        }
       
    }
    puts(str);
}

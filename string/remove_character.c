#include<stdio.h>
#include<string.h>
void remove_the_character(char *str,char ch)
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=ch)
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    
}
int main()
{
    char str[80];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    char ch;
    printf(" Enter the character you want to remove : ");
    scanf(" %c",&ch);
    remove_the_character(str,ch);
    puts(str);
}

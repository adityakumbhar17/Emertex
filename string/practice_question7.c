#include<stdio.h>
#include<string.h>
void printstring(char *str)
{
 char ch='c';
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
 puts(str);
}
int main()
{
    printf("enter the string :\n");
    char str[100];
    scanf("%[^\n]",str);
    printstring(str);

}

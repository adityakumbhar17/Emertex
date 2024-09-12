//write the program to  to reverse the first three character from the given string
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string :\n");
    char str[80];
    scanf("%[^\n]",str);
    char temp=str[0];
    str[0]=str[2];
    str[2]=temp;
    puts(str);
}

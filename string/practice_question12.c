//WAP to insert the specific number to the specific index
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    printf("Enter the string: ");
    scanf(" %[^\n]",str);
    int ii;
    char num;
    printf("give the inserting index: ");
    scanf("%d",&ii);
    printf("give the inserting number: ");
    scanf(" %c",&num);
    int length=strlen(str);
    for(int i=length;i>=ii;i--)
    {
        str[i+1]=str[i];
    }
    str[ii]=num;
    puts(str);
}

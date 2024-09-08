//Wap to claculate th total number of the vovells present in the given string.
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[90];
    printf("Enter the string\n");
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
        
        i++;
    }
    printf("%d",count);
}

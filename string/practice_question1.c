//count the length of the  last word  of the string..
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int count=0;
    printf("Enter the string :\n");
    scanf("%[^\n]",ch);
    int len=strlen(ch);
    for(int i=len-1;i>=0;i--)
    {
        if(ch[i]==' '|| ch[i]=='\t')
        {
            count=len-i-1;
            break;
        }
    }
    printf("length of the last word :%d",count);
}

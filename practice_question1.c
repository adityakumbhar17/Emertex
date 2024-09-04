/*
  reverse the string 
ex- hello hi
o/p- hi hello
*/

#include <stdio.h>
#include<string.h>

int main()
{
    char ch[50];
    printf("Enter the string : ");
    scanf(" %[^\n]",ch);
    int l=strlen(ch);
    printf("%d\n",l);
    for(int i=l; i>=0; i--)  //traverse from last index untill the zero will not come.
    {
        if(ch[i]==' ' || i==0)
        {
            for(int j=i==0?0:i+1; ch[j]!=' ' && ch[j]!=0; j++)
            {
                printf("%c",ch[j]);
            }
            printf(" ");
        }
    }
}

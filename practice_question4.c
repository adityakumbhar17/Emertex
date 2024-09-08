//check the string is uniqui or not
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[60];
    printf("Enter the string\n");
    scanf("%[^\n]",str);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        for(int k=i+1;k<l;k++)
        {
            if(str[i]==str[k])
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("the entered string is not unique string.\n");
    }
    else
    {
        printf("The entered string is the unique string.");
    }
    
}

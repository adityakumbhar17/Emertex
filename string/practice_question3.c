//program to count the only digits from the strings
#include<stdio.h>
#include<string.h>
int count_number(char *str,int count)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0'&& str[i]<='9')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    
    char str [70];
    printf("Enter the string :\n");
    scanf("%[^\n]",str);
    int count=0;
    int result= count_number(str,count);
    printf("The count of the number is %d",result);
    
}

//program to add the only digits from the strings
#include<stdio.h>
#include<string.h>
int sum_number(char *str,int sum)
{
    int i=0;
    while(str[i]!='\0')                //using loop for traverse on that string;
    {
        if(str[i]>='0'&& str[i]<='9')  //check the number is in the range or not;
        {
           sum=sum+(str[i]-48);  // here we convert the character to the integer then we add;
        }
        i++;
    }
    return sum;                //here we return the sum;
}

int main()
{
    
    char str [70];
    printf("Enter the string :\n");
    scanf("%[^\n]",str);
    int sum=0;
    int result= sum_number(str,sum);
    printf("The sum of the number is %d",result);
    
}

//write the program to count the word from the given string..
#include<stdio.h>
#include<string.h>
void word_count(char *str)
{
    int wordcount=0;
    int i=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            wordcount++;
            
        }
        i++;
    }
    printf("count of the words is %d",wordcount+1);
}
int main()
{
    printf("Enter the string from the user...\n");
    char str[100];
    scanf("%[^\n]",str);
    word_count(str);
    
    
}

#include<stdio.h>
#include<string.h>
int hasVowel(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        char ch =str[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
           {
               return 1;
           }
    }
    return 0;
}
   int main() 
   {
    char str1[] = "mbsklw";
    if (hasVowel(str1)) 
    {
        printf("Yes, vowel is present in the string\n");
    } 
    else 
    {
        printf("No, vowel is not present in the string\n");
    }
   }

/*
Name- Aditya shivaji kumbhar
Description-c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
Sample Execution-
Enter the character: a
The character 'a' is an alnum character.
Date-04-09-2024
*/

#include <stdio.h>

int my_isalnum(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:\n");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
    if(ret==1)
    {
        printf("Entered character is alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character");  
    }
}
int my_isalnum(int ch) 
{
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122 || ch>=48  && ch<=57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

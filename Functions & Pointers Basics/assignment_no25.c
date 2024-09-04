/*
Name - Aditya shivaji kumbhar
description-WAP to implement your own ispunct() function
date-07-08--2024
*/
#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    if(ret==1)
    {
       printf("Entered character is punctuation character"); 
    }
    else
    {
        printf("Entered character is not punctuation character");
    }
   
}
int my_ispunct(int ch)
{
    if(ch>=33 && ch<= 47 || ch>=58 && ch<=63)
    {
     return 1;
    }
    else
    {
     return 0;
    }
}

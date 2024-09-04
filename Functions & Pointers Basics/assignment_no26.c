/* 
Name- Aditya Shivaji kumbhaar 
description- WAP to implement your own isxdigit() function
Date- 07-08-2024
*/
#include <stdio.h>

int is_xdigit(int);

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    
   if(ret==1)
   {
       printf("Entered character is an hexadecimal digit");
   }
   else
   {
      printf("Entered character is not an hexadecimal digit"); 
   }
    
    return 0;
}

int is_xdigit(int n)
{
    if(n>='0' && n<='9' || n>='a' && n<='f'|| n>='A' && n<='F')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



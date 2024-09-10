//program to find the length of the string by using the pointer variable.
#include<stdio.h>
#include<string.h>

int main()
{
  char ch[60]; //create the space for  store the sting.
  char *p;     //create the pointer varaible for store the address of the string.
  int length=0;
  printf("Enter the string :\n");
  scanf("%[^\n]",ch);
  p=ch;   //assigne the main string addterss to the p variable
  
  while(*p!='\0')
  {
      length++;
      p++;
  }
  printf("The count of the string| the length of the string is %d",length);
  
}

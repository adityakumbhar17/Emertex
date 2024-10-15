//write the program to   delete the first three index from the string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    scanf("%[^\n]",str);
    int length=strlen(str);
    for(int i=3;i<length;i++)  //strat the  index fromm the  third position  up to the length
    {
        str[i-3]=str[i];       //1)i-3=3-3=0 like this we store the value at that index.
    }
    str[length-3]='\0';   // at the last we strore the null character for ending the string.
    puts(str);            //print the string 
}

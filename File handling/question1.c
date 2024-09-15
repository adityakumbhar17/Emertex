//WAP to add or write the text in the file .
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr=fopen("18c.txt","w");          //get the accsess of the txtfile 
    char str[50]="Aditya";                    //store the string in the file buffer.
    int i=0;                                 
    while(str[i]!='\0')
    {
      fputc(str[i],fptr);                    //put the data in the file one by one
      i++;
    }
    fclose(fptr);
    
}

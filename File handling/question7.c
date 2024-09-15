//WAP to add new line in the  in the file that
#include<stdio.h>
int main()
{
    FILE *ptr=fopen("18c.txt","a");               //get the accsess of the file
    //char *text="\n hi this is aditya an this is the 6th line in the program";      //here we created the string
    char text[22];                   //buffer;
    printf("Enter the text:-\n");    //prompt to user;
    scanf("%[^\n]",text);            //tae the input fro the string
    fputs("\n",ptr);
    fputs(text,ptr);                 //store that string in the file using ptr
    //fprintf(ptr,"%s",text);
    fclose(ptr);                   //close the file...
    printf("your line is added sussesfuly in the file");

}

//Write the program to finde the size of the file
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=fopen("18d.txt","r+");
    char *str="hi this is adityakumbhar";
    char*str2="\nhii this is the another line ";
    fputs(str,ptr);
    fputs(str2,ptr);
    fseek(ptr,0,SEEK_END);
    long file_size=ftell(ptr);
    printf("size of the file is %ld",file_size);
}

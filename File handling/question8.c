//WAP to read the all characters from the file and if it is small the convert into captail letters
#include<stdio.h>
int main()
{
    FILE *ptr =fopen("18d.txt","r+");  
    
     if (ptr == NULL)
      {                   
        printf("File could not be opened.\n");
        return 1;
      }

    char ch=fgetc(ptr);
    while(ch!=EOF)
    {
        if(ch>='a'&& ch<='z')
        {
           //fseek(ptr,1,SEEK_CUR);
           ch=ch-32;
           fputc(ch,ptr);
        }
        ch=fgetc(ptr);

    }
    fclose(ptr);
    printf("done....");
}

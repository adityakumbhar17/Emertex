//WAP to check the given string is in the file or not.
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=fopen("18d.txt","r");
    char line[230];                //create the buffer for store the the data from the file
    char search[80];               //this  is another buffer to store the  string which we finde.
    printf("Enter the string which you want to find\n");
    scanf("%[^\n]",search);
    while(fgets(line,sizeof(line),ptr))      //here we use fgets to store the all data in the line buffer
    {
        if(strstr(line,search)!=NULL)       //check the enterd strig is avilable o not.
        {
            printf("Found...\n%s",line);     //avilable the print that all line.
            
        }
    }
    fclose(ptr);
}

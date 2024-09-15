//WAP to copy one file data into another file 
#include<stdio.h>
int main()
{
    FILE*source=fopen("18c.txt","r");         //get the accesss of 18c.txt file for reading only
    FILE*destination=fopen("18d.txt","w");    //get the acsses of 18d.txt file for writing only;
    char ch=fgetc(source);                    //get the first character from the file..
    while(ch!=EOF)                            //use the loop until the our offset is at the last position.
    {
        fputc(ch,destination);                //copy that first character to another file.
        ch=fgetc(source);                     //again get the character 

    }
    fclose(source);                           //close the file.
    fclose(destination);                     //close the file
    printf("your data is copy successfulyy");  //prompt the massage...
}

//write the program to print each line|| each character by using the fgets.
#include<stdio.h>
int main()
{
    FILE *ptr =fopen("18c.txt","r");       //here we get the  access the 18c.txt file  in the r eading mode only

    char line[226];                       //here we created buffer for store the file data which we get from the file
    while(fgets(line,sizeof(line),ptr))   //this loop run till the NULL value means the nulll character after it reach null the condition getting false and we get out from the loop
    {
        printf("%s",line);                //here we print that line on our cansole
    }
    fclose(ptr);                          // here close the the file.
}

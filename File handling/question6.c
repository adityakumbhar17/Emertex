//write the program to read the spacific line from the file and print that line from that line.
#include<stdio.h>
int main()
{
    FILE *ptr=fopen("18c.txt","r");
    //if we want print the data on the console the we need to create one buffer in the program so we
    //copy the data from the file and paste in the  that buffer so our oriaginal data will be safe
    char line[230];
    //now we need to scan the which line we need to print
    int line_number=5;
    int current_line=1;  // this is llike indexing we start the indexing from the one ;
    while(fgets(line, sizeof(line),ptr))
    {
        //check the condition our line number and the current line is same or not if it is same then we print that line otherwie increase the counnt;
        if(current_line==line_number)
        {
            printf("line %d:- %s",line_number,line);
        }
        current_line++;
    }
    fclose(ptr);


}

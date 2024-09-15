//WAP to find the the how many word in the file.
#include<stdio.h>
int main()
{
    FILE *fptr=fopen("18c.txt","r");     //here we get the access of the 18c.txt file 
    char ch= fgetc(fptr);                //get the first character from the file.
    int word_count=0;                    //initialize the word count.
    while(ch!=EOF)                       //itreete the loop up to the end of the file.
    {
        if(ch==' ')                      //here we cheeck the  current character is space or not 
        {
            word_count++;                //if it is space then increasing the word count.
        }
        ch=fgetc(fptr);                  //again take the character from the next character from the file..
    }
    fclose(fptr);                        // after all the opration close the file using fclose function.
    printf("count of word in the string is %d",word_count+1);     //here we print the count of the numbers in that file.

}

//write the program toscan the five names and add in the file without using the append mode.
#include<stdio.h>
int main()
{
    //create one buffer
    char name[30]; // this our buffer here we can store that five names.
    FILE *fptr=fopen("18c.txt","w");  //here we give the access of file to the fptr pointer and now we accsess that file through the fptr.
    int var=5;       //this many tmes we add the data n the ouer buffer
    while(var--)
    {
        //here in this block we  take the inputs from the user and store in the buffer temporary.
        printf("Enter the your names\n");
        scanf(" %[^\n]",name);

        
    
    int i=0;
    while(name[i]!='\0')
    {
        fputc(name[i],fptr);
        i++;
    }
      fputc("\n",fptr);
    }
    fclose(fptr);
   
}

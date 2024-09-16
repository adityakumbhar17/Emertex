//WAP to scan and print the string use dynmic memory allocation and array of pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size of the Array pointer\n");
    scanf("%d",&size);
    //now create the character  array of pointer having the size times pointers.
    char *ptr[size];   //this is the way to create the array of pointers.
    //now we need to give the size for each pointer in the array in the heap segment of the memory.
    for(int i=0;i<size;i++)
    {
        ptr[i]=malloc(25) ;      //this line indicates that each element have the size 25 bytes in the heap segment.
    }

    //add the data|| add the strig in that pointers.
    printf("enter the %d strings\n",size);
    for(int i=0;i<size;i++)
    {
        scanf(" %[^\n]",ptr[i]);      //here we get the strings from the user and store in the respective pointers.

    }

    printf("_______________________________\n");
    printf("Your string \n");
         for(int i=0;i<size;i++)
         {
            printf("%s\n",ptr[i]);
         }
    printf("\n_______________________________");
}

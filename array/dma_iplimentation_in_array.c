//write the program to create the  array and allocat the memory i the heap 
#include<stdio.h>
#include<stdlib.h>   //  this is the libray to use for the dynamic memory allocation function.

int main()
{
    int size;
    //take the size od the array fom the user sie means the how many elements you wants in your array
    scanf("%d",&size);
    
    //now declare the array and give the size for the each element dynamically 
    int *arr=(int*)malloc(size*(sizeof(int))); //here we give the size for each elements
    
    //now store the elements in the array using the for loop
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    
    //print the all element  w stored in the array.
    for(int j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
    
    free(arr);
    return 0;
}

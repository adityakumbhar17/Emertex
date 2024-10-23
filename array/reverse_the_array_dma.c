//reverse the array  use malloc for storin the array element in the heap segment
#include<stdio.h>
#include<stdlib.h>
void reverse_the_array(int *arr,int size)
{
    //reverse the array.
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
        
    }
    
    //print the array 
    printf("Reversed array is :\n");
    for(int j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
}
int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d",&size);
    //declare the array 
    int *arr=(int*)malloc(size*sizeof(int));
    printf("Enter the elemet of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse_the_array(arr,size);
}

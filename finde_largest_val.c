#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));   //use DMA
    //take the input fro the user 
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int largest_elem=arr[0];
    for(int j=0;j<size; j++)
    {
        if(arr[j]>largest_elem)
        {
            largest_elem=arr[j];
        }
    }
    printf(" the largest element is %d",largest_elem);
    
    free(arr);
    return 0;
    
}

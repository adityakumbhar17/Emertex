//write the program to calculate the sum of the array store the  array in the heap segment  use pointer consept
#include<stdio.h>
#include<stdlib.h>
int sum_of_elem(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    //scan the input from the user
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans = sum_of_elem(arr,size);
    printf("%d",ans);
}

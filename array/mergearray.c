#include<stdio.h>
int main()
{
    int size1,size2;
    printf("Enter the size of the 1st arrays: ");
    scanf("%d",&size1);
    printf("Enter the size of the 2nd array: ");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2];
    //get the array input from the user;
    printf("enter the elements of the array1:  ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements of the array2:  ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int size=size1+size2,j=0;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        if(i<size1)
        {
            arr[i]=arr1[i];
            
        }
        else
        {
            arr[i]=arr2[j];
            j++;
        }
    }
    printf("Merged array : ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    
    
}

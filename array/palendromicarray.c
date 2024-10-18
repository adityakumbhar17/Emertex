//write the program to check wether the enterd array is palandromic or not 
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array.");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int flag=0;
    for(int i=0;i<size/2;i++)
    {
        if(arr[i]!=arr[size-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Enterd array is palandromic array. ");
    }
    else
    {
        printf("Enterd array is not palandromic array.");
    }
}

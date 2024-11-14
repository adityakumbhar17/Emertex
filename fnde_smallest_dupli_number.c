#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter the elements of the array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //array for checking the element is present or not,
    int present[size+1];
    for(int i=0;i<size;i++)
    {
        present[i]=0;    //make it as 0;
    }
    
    //now check the element is present or not 
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0 && arr[i]<=size)
        {
            present[arr[i]]=1;
        }
    }
    int missingnumber=0;
    for(int i=1;i<size;i++)
    {
        if(present[i]==0)
        {
            missingnumber=i;
        }
    }
    printf("The smallest missing number is %d",missingnumber);
}

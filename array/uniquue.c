#include<stdio.h>
int main()
{
    int size;
    int count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int k=i+1;k<size;k++)
        {
            if(arr[i]==arr[k])
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("Not unique array");
    }
    else{
         printf("unique array");
    }
}
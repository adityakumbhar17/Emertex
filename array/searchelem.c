#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the  array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which you need to find from that array\n");
    int x,index;
    int flag=0;
    scanf("%d",&x);
    for(int i=0;i<size;i++)
    {
        if(x==arr[i])
        {
           flag=1;
           index=i;
           break;
        }
        
    }
    if(flag==0)
    {
         printf("the element is not present in the array");
    }
    else
    {
         printf("the element is  present in the array at index %d",index);
    }
}
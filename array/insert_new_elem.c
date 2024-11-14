
#include<stdio.h>
int main()
{
    int size,newelem;
    printf("Enter the size f the array : ");
    scanf("%d",&size);
    //declare the array
    int arr[size+1];
    //take the array elemnts from the user.
    printf("Enter the array element : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    //now take the new extra variable to insert ;
    printf("Enter the new element : ");
    scanf("%d",&newelem);
    arr[size]=newelem;
    size++;
    printf("ubnsorted");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //no sort he array .
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    printf("the sorted array is : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

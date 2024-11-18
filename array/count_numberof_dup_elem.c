//print the count of the duplicate element in the array;
#include<stdio.h>
int main()
{
    int size,delem;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        int flag =0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            flag=1;
            break;
        }
        if(flag)
        {
            continue;
        }
        int count=1;
        for(int k=i+1;k<size;k++)
        {
            if(arr[i]==arr[k])
            {
                count++;
            }
        }
        if(count>1)
        {
            delem++;
        }
    }
    printf("%d",delem);
    
    
}

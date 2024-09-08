//return indices of the two numbers such that they add up to target.
#include<stdio.h>
int main()
{
    int size ,target=6;
    int indexi=0,indexj=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                //printf("%d %d",i,j);
                indexi=i;
                indexj=j;
                
            
            }
            
        }
        
    }
    printf("first index %d  second index %d",indexi,indexj);
   
}

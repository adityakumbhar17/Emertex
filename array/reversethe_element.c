/*         ____
          |   |
        1  2 3 4 5
        |________|
    
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter thesizeof the array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
       
    }
    for(int j=0;j<size;j++)
    {
         printf("%d",arr[j]);
    }
    
}
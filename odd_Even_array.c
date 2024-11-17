Name- Aditya shivaji Kumbhar
Description - Copy odd and even elements into two separate arrays
Date-03-08-2024
*/
#include<stdio.h>
int main()
{
    int size  ;
    //enter the size of the array
    scanf("%d",&size);
    //ddeclare the array;
    int arr[size],even_arr[size],odd_arr[size];
    //enter the elements in the array;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Odd array elements: ");
    for(int j=0;j<size;j++)
    {
        if(arr[j]%2!=0)
        {
            odd_arr[j]=arr[j];
            printf("%d ",odd_arr[j]);
        }
    }
    printf("\n");
    printf("Even array elements: ");
    for( int o=0;o<size;o++)
    {
        if(arr[o]%2==0)
        {
            even_arr[o]=arr[o];
            printf("%d ",even_arr[o]);
        }
    }
    
    
}

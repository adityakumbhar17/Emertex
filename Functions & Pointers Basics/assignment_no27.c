/*
Name- Aditya shivaji Kumbhar 
date-21-08-2024
description-WAP to find 3rd largest element in an array
Sample Execution:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Third largest element of the array is 11
*/

#include<stdio.h>
void  get_the_third_largestelem(int *aptr ,int size)
{
    int largest_num=*(aptr+0);
    int seclargest=-1;
    int thirdlargest=*(aptr+0);
    for(int i=0;i<size;i++)
    {
        if(*(aptr+i)>largest_num)
        {
            thirdlargest=seclargest;
            seclargest= largest_num;
            largest_num =*(aptr+i);
        }
        else if(*(aptr+i)>seclargest && *(aptr+i)!= largest_num  )
        {
             thirdlargest=seclargest;
            seclargest= *(aptr+i);;
            
        }
    
        else if(*(aptr+i)>thirdlargest && *(aptr+i)!= seclargest  &&  *(aptr+i)!= largest_num )
        {
            thirdlargest=*(aptr+i);
        }
    }
    printf("Third largest element of the array is %d",thirdlargest);
    
}
int main()
{
    int size;
    printf("Enter the size of the Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements into the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    get_the_third_largestelem(arr,size);
}

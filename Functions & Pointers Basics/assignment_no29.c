/*
Name- Aditya shivaji kumbhar
Date-21-08-2024
description-WAP to remove duplicate elements in a given array;
sample execution:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
After removing duplicates: 5 1 3
*/

#include<stdio.h>
void remove_duplicate_element(int *ptrarr ,int *ptrnew_arr,int size)
{
    int k=0;
    for(int i=0;i<size;i++)    //this loop for traversing on the first loop 
    {
        int flag=0;
        for(int j=0;j<k;j++)   //this loop is for to traverse on the second loop
        {
            if(ptrarr[i]==ptrnew_arr[j])   //here we check the element of the first arrayis available or not in the second array
            {
                flag=1;             //if it is available thent assigen the 1 to the flag and out from tha loop .
                break;
            }
        }
        if(flag==0)
        {
           ptrnew_arr[k]=ptrarr[i];   // here we assigne the  current value from the first element to the anater array
           k++;                       //update or increment the size or the second array;
        }
    }
    printf("After removing duplicates: ");
    for(int i=0;i<k;i++)
    {
        printf("%d ",ptrnew_arr[i]);     //here print the dplicate element;
    }
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter elements into the array: ");
    int arr[size];
    int new_arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    remove_duplicate_element(arr,new_arr,size);
    
}

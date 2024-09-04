/*
Name- Aditya shivaji kumbhar
Date 21-08-2024
description-WAP to find 2nd largest element in an array
sample execution:-
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Second largest element of the array is 22
*/


#include<stdio.h>
void get_second_large(int *arr_ptr,int size)   //here we store the addres of the array using pointer
{
   int largest=*(arr_ptr+0);                    //assigen the first valueas largest  
   int secondlargest=-1;                        //assigen the invalid index
//   int thirdlargest=-1;
   for(int i=0;i<size;i++)
   {
       if(*(arr_ptr+i)>largest)     //here we compare the ith element of the array is greter than largest or not if it is greater then the condition will execute
       {
           secondlargest=largest;   //if the condition is true then we assigen the largest numer in the second largest
           largest=*(arr_ptr+i);   // ere we assigen the cuurent array element into the largest variable;
           
       }
       else if(*(arr_ptr+i)> secondlargest &&*(arr_ptr+i)!=largest)   //here we check the  curent element is greater than the secondlargest and not equale to the largest
       {
            secondlargest=*(arr_ptr+i);                               //the condition is true then you assigen the current element in the secondlargest number.
       }
   }
   printf("Second largest element of the array is %d", secondlargest);    //here we  print the second largest number..
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
    get_second_large(arr,size);
    return 0;
}

/*
here we need to find the largest element from the array
for that first we need the one array and for we need the arraysize
first declare the array size  then take the array size from the user then we need to scan the value
of size  then declare the array . then scan or take the input from the user for that we need for loop
and for accsesing each element from  the array we need to use anothe r for loop
before that we need to declare the largest variable  and in that variablewe  assigin the fist vale of
the array and inside the another for  loop we check the the loop is correct or not 
*/
#include<stdio.h>
int main()
{
   //declare the size of the array
   int size;
   printf("Enter the size of the array\n");
   //take the input from the user
   scanf("%d",&size);
   //now declare the array
   int arr[size];
   //noe take the input from the array for that weneed to  use the for loop
   printf("Enter the array elements\n");
   for(int i=0;i<size;i++)
   {
    //by using the for loop we take the inputts from the user
    scanf("%d",&arr[i]);
   }
   //now here we declare the largest variable and we store the elemtof array in 0th index
   int largest=arr[0];
   //here we nned one more for loop for the accsessing the array elements here we check the largest number
   for(int i=0;i<size;i++)
   {
    if(largest<arr[i])
    {
        largest=arr[i];
    }
   }
   //here we print  the largest element of the array
   printf("the largest element of array is %d",largest);
}
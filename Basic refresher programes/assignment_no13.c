/*
Description:
In probability theory and statistics, a median is described as the number separating the higher half of a sample, a population, or a probability distribution, from the lower half. The median of a finite list of numbers can be found by arranging all the numbers from lowest value to highest value and picking the middle one.
Example:
For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle element of the sorted array which is 12.
*/
#include<stdio.h>
int main()
{
    int s1,s2,temp;
    //prompt
   // printf("Enter the size of the array1");
    scanf("%d",&s1);
    //printf("Enter the size of the array2");
    scanf("%d",&s2);
    int arr1[s1],arr2[s2];
    //take the inputs from the user for first array
   // printf("Enter the element for the first array");
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    //printf("Enter the element for the second array");
    for(int j=0;j<s2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    
    
   /////////////////////////////////////////////////////////////////////////////////////////////////////////
   
   
   
    //first sorted the first array
    for(int i=0;i<s1;i++)   //these for loop is for the give ittration on the first element
    {
        
        //these for loop is use to ittrate in the array and compare with the other element
        for(int j=0;j<s1-i-1;j++)  //these loop is used to ittrate up to size-1 for each ittration
        {
          //swap
          if(arr1[j]>arr1[j+1])
          {
              temp=arr1[j];
              arr1[j]=arr1[j+1];
              arr1[j+1]=temp;
          }
          
        }
        
    }
 
  /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //sort the second array
     for(int i=0;i<s2;i++)   //these for loop is for the give ittration on the first element
    {
        
        //these for loop is use to ittrate in the array and compare with the other element
        for(int j=0;j<s2-i-1;j++)  //these loop is used to ittrate up to size-1 for each ittration
        {
          //swap
          if(arr2[j]>arr2[j+1])
          {
              temp=arr2[j];
              arr2[j]=arr2[j+1];
              arr2[j+1]=temp;
          }
        }
        
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //find the median of  sorted array
    float med1;
    if(s1%2==0)
    {
        med1=(arr1[s1/2]+arr1[(s1/2)-1])/2.0;
    }
    else
    {
        med1=arr1[s1/2];
    }
    printf("Median of array1 : %g\n",med1);
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////
   
   
    //find the median of sorted array two
    float med2;
    if(s2%2==0)
    {
        med2 =(arr2[s2/2]+arr2[(s2/2)-1])/2.0;
    }
    else
    {
        med2=arr2[s2/2];
    }
    printf("Median of array2 : %g\n",med2);
   
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //print the median of the both the array
    
    printf("Median of both arrays : %g",(med1+med2)/2);
    
}

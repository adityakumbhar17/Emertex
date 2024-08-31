/* write  the program to the given array  in the assending order
 for that we need to sort the array and we used the bubble sort techniqui 
 to solve this problame first we need to understand what is the peoblame means what we can do  for sorting 
 first we need to compare the current element with other and we need to  till the size and after each number we swap
 then we need to decriment the array size*/
 #include<stdio.h>
 int main()
 {
    int size ,temp;
    printf("Enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of the array :-");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
    printf("your modified array is");
    for(int k=0;k<size;k++)
    {
        printf("%d ",arr[k]);
    }
 }
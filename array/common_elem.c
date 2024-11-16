//finde the common elements from the two array.
#include<stdio.h>
int main()
{
    int size1,size2,size;    //declare the size.
    printf("Enter the size of the first array : ");
    scanf("%d",&size1);
    printf("Enter the size of the second array: ");
    scanf("%d",&size2);
    int s=0;
    
    int arr1[size1],arr2[size2];
    printf("Enter the elements of the array 1");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the array 2");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
   int uarr[size1>size2? size1:size2];
   int k=0;
   for(int i=0;i<size1;i++)
   {
       for(int j=0;j<size2;j++)
       {
           if(arr1[i]==arr2[j])
           {
               int flag=0;
               for(int l=0;l<k;l++)
               {
                   if(uarr[l]==arr1[i])
                   {
                       flag=1;
                       break;
                   }
               }
               if(flag==0)
               {
                   uarr[k]=arr1[i];
                   k++;
               }
           }
       }
   }
   printf("the common elements of the array is : ");
   for(int i=0;i<k;i++)
   {
      printf("%d",uarr[i]); 
   }
}

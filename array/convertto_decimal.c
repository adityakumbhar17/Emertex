/*WAP to convert the even value as 0 and odd as 1 in the array
and print the eqivalante decimal for that value*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elemets: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //check the array element is odd or even
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
            
        }
        else
        {
            arr[i]=1;
            
        }
    }
    printf("binary value is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    int decimalval=0;
    int powoftwo=1;   //2^0=1 
    for(int i=size-1;i>=0;i--)
    {
        decimalval=decimalval+arr[i]*powoftwo;
        powoftwo=powoftwo*2; //update the powoftwo for the next cycle.
    }
    printf("\ndecimalvalue of that binary arry is : %d",decimalval);
}

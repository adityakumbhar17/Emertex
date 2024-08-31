#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array :  ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the arry elemenyts\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    int x,count=0;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for(int i=0;i<size;i++)
    {
        if(x==arr[i])
            count++;
    }
    printf("the number is comming %d times in the array",count);
}
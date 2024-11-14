#include<stdio.h>
int main()
{
    int size,newelem,pos;
    printf("Enter the size ");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter the array element : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array before the insertng the  new elem");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the new element for store in the array.");
    scanf("%d",&newelem);
    printf("Enter the position of thearray in which position we need to store the element :");
    scanf("%d",&pos);
    //now check thepos is valid or not
    if(pos<0||pos>size)
    {
        printf("Invalid position outofthe range :");
        
    }
    //now shift the position to  the left
    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    //now insert the value in that position.
    arr[pos]=newelem;
    size++;
    printf("the array after the inserting the new element: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

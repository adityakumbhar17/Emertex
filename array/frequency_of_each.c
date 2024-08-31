/* count the freqency of the each element in the array means to check how many time the  numberr is comming in the 
array for that we need to first take one array and we need totraverse on the array and  when the we found the same number
in the array then update or increasing the frequency meanse update the cont of that nmber
how will do that lets check*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of yor array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array element ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        //here we need the backcheking
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;   //it means we already checkthese elemennt and  we store the record and now dontwant to check so we start the oter loop from next ittration
                break;
            }
        }
        if(flag==1)
        {
            continue; //it means continue from the next ittration we already check that number
        }
       int count=1;
        for(int k=i+1;k<size;k++)
        {
            if(arr[i]==arr[k])
            count++;
        }
        printf("%d : %d times count \n",arr[i],count);
    }
    
}

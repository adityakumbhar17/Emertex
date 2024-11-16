#include<stdio.h>
int answer_of_array(int *arr1,int *arr2,int s1,int s2)
{
    int rev_num=0,num=0;
    //we reverse the first array
    for(int i=0;i<s1/2;i++)
    {
        int temp=arr1[i];
        arr1[i]= arr1[s1-i-1];
        arr1[s1-i-1]=temp;
        
    }
    for(int i=0;i<s1;i++)
    {
        rev_num=(rev_num*10)+arr1[i];
    }
    for(int i=0;i<s2;i++)
    {
        num=(num*10)+arr2[i];
    }
    if(rev_num==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
   
}
int main()
{
    int s1,s2;
    printf("Enter the size 1 for the first array");
    scanf("%d",&s1);
    printf("Enter the size for the second array:-");
    scanf("%d",&s2);
    if(s1!=s2)
    {
        printf("Size are not match it coudent the mirror image");
    }
    
    else
    {
        
        //declare the arrayy;
        int arr1[s1],arr2[s2];
        printf("Enter the element for the first array: ");
        for(int i=0;i<s1;i++)
        {
            scanf("%d",&arr1[i]);
            
        }
        printf("Enter the arrayelement for the secod array :");
        for(int i=0;i<s2;i++)
        {
            scanf("%d",&arr2[i]);
            
        }
       
        int ans=answer_of_array(arr1,arr2,s1,s2);
        if(ans==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    
}

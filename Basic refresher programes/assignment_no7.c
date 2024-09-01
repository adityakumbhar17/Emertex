/* 
Name : Adiitya Shivaji kumbhar
Discription : WAP to print the triangle pattern
Date: 26-07-2024
sample output : 1 2 3 4 5
                6     7
                8   9
                10 11
                12
*/
#include<stdio.h>
int main()
{
    int n, num=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    //outer loop 
    for(int i= 0; i<n; i++)
    {
        for(int j=0;j<n-i; j++)
        {
            if(j==0|| i==0|| j==n-i-1)
            {
                printf("%d ",num);
                num++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}

/*
Description:

Read a number from user. Let's say if number is 5, you need to print numbers in X pattern as shown below:
If n = 5, then,
1___5
_2_4_
__3__
_2_4_
1___5
Note:- Please consider '_' as space. 
*/
/*
Name : Aditya Shivaji kumbhar
Description : WAP to print the number in X format as shown below
Date : 23-07-2024
Sample output 1   5
               2 4 
                3  
               2 4
              1   5
*/
#include<stdio.h>
int main()
{
    int n;     //number of the rows
    printf("Enter the number: ");
    scanf("%d",&n);
    //outer loop
    for(int i=1; i<=n;i++)
    {
        //inner loop
        for(int j=1; j<=n;j++)
        {
            if(i==j|| i+j==n+1)  //condition 
            {
             printf("%d",j);   
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
}

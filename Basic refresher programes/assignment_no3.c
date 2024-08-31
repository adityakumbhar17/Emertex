/*
Name: Aditya Shivaji Kumbhar
Description : WAP to generate negative fibonacci number
Date : 22-07-2024
sample output : Enter a number: -8
                0 1 -1 2 -3 5 -8
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int fn=0;
    int sn=1;
    int nxt=0;
    if(num>0)
    {
        printf("Invalid input");
    }
    else
    {
        while(nxt>=num)
        {
            printf("%d ",nxt);
            fn=sn;
            sn=nxt;
            nxt=fn-sn;
           
        }
    }
    return 0;
}
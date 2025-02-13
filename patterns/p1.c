/*patterns in c.

*
* *
* * *
* * * *

*/

#include<stdio.h>
int main()
{
    //scan the number from the user.
    int  num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
}

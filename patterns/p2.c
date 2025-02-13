
/*patterns in c.

*****
****
***
**
*

*/



#include<stdio.h>
int main()
{
    int num;
    //scan the input from the user 
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=num;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

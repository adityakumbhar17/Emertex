

/*patterns in c.

   *
  **
 ***
****

*/



#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    //scan the input from the user 
   for(int i=1;i<=num;i++)
   {
       for(int j=1;j<=num;j++)
       {
          if(i+j>=num+1)
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
       }
       printf("\n");
   }
}

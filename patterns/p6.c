

/*patterns in c


*****
*   *
*   *
*****

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
          if((i==1)||(j==1)||(i==num)||(j==num))
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

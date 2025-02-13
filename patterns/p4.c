/*patterns in c


1
1 0
1 0 1 
1 0 0
1 0 1 0
1 0 1 0 1 

*/



#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    //scan the input from the user 
   for(int i=1;i<=num;i++)
   {
       for(int j=1;j<=i;j++)
       {
          if(j%2==0)
          {
              printf("0");
          }
          else
          {
            printf("1");
          }
       }
       printf("\n");
   }
}

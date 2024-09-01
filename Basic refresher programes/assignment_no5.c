/*
Description:

AP :
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.
GP :
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
HP :
 In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.
*/

#include<stdio.h>
int main()
{
    int A,R,N;
    printf("Enter the First Number 'A': ");
    scanf("%d",&A);
    printf("Enter the Common Differance/Ratio 'R': ");
    scanf("%d",&R);
    printf("Enter the Number of terms 'N': ");
    scanf("%d",&N);
     int AP,GP;
     float HP;
     if(N<0)
     {
         printf("Invalid input");
     }
     else
     {
         
        //block for the Ap
         AP=A;
         printf("AP = %d, ",AP);
         for(int i=1;i<N; i++)
         {
             AP=AP+R;
             printf("%d, ",AP);
         }
         printf("\n");
         
         //block for Gp
         GP=A;
         printf("GP = %d, ",GP);
         for(int i=1;i<N; i++)
         {
             GP=GP*R;
             printf("%d, ",GP);
         }
         printf("\n");
         
         //block for HP
         HP=(float)1/A;
         int a=A;
         
         printf("HP = %f, ",HP);
         for(int i=1;i<N; i++)
         {
             a=a+R;
             HP=(float)1/a;
             printf("%f, ",HP);
         }
          
     }
}

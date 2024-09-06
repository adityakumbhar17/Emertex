/*
Name- Aditya shivaji Kumbhar 
Description-
a. Read number num from user.
b. Read number n from user.
c. Do error checking
  -> If n is greater than integer size, assign n value as sizeof integer.
d. Print n number of bits of num from LSB end.
If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0
Sample execution-
Enter the number: 10
Enter number of bits: 12
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
Date-05-09-2024
*/

#include <stdio.h>

void print_bits(int num , int n)
{
    printf("Binary form of %d: ",num);
     
    for(int i=n-1;i>=0;i--)
    {
        if(num&(1<<i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    
    // printf("Binary form of %d:", num);
    print_bits(num, n);
 }

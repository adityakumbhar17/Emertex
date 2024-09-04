/* 
Name -Aditya shivaji Kumbhar 
description-
If num is 10 and n is 2,
10 -> 0 0 0 0 1 0 1 0 
Take 2 bits from LSB end of 10 (1 0) and return the corresponding decimal of that. 
So get_nbits(10, 2) function should return 2
Date- 04-09-2024
sample execution-
Enter the number: 10
Enter number of bits: 3
Result = 2
*/


#include <stdio.h>

int get_nbits(int num, int n)
{
    return num&((1<<n)-1);
}

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);
}

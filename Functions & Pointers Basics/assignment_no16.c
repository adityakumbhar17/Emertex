/*
Name- Aditya Shivaji Kumbhar

Description-
a. Read number num from user.
b. Read number n from user.
c. Read number val from user
d. Fetch n number of bits from LSB end of val and replace in the last n bits of num.
e. Return new value of num. If num is 10 and n is 3 and val is 12
10 -> 0 0 0 0 1 0 1 0 
 12 -> 0 0 0 0 1 1 0 0 
The program should print result as 12 (1 1 0 0)

Date-04-09-2024

Sample execution-
Enter the number: 10
Enter number of bits: 3
Enter the value: 12
Result = 12
*/

#include <stdio.h>

int replace_nbits(int num, int n, int val)
{
    return (num&~((1<<n)-1) ) | (val & ((1<<n)-1)  );
}

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
}

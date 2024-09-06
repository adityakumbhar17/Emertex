/* Name - Aditya shivaji Kumbhar 
Description-
a. Read number num from user.
b. Read number n from user.
c. Read number pos from user.
d. Invert the n number of bits from pos positionth bit of num.
e. Return the new value of num
If num is 10, n is 3, and pos is 5
                        7 6 5 4 3 2 1 0
               10 -> 0 0 0 0 1 0 1 0
return value -> 0 0 1 1 0 0 1 0
So the function should return 50 (0 0 1 1 0 0 1 0)
Sample Execution-
Enter the number: 10
Enter number of bits: 3
Enter the pos: 5
Result = 50
Date-05-09-2024
*/


#include <stdio.h>

int toggle_nbits_from_pos(int num, int n, int pos)
{
    return num^(((1<<n)-1)<<(pos-n+1));
}

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}

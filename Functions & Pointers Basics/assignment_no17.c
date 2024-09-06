/*
Name- Aditya shivaji kumbhar
Description-
a. Read number num from user.
b. Read number n from user.
c. Read number pos from user.
d. Fetch n number of bits from given position 'pos' (starting from LSB) of num and return the decimal value of it.
If num is 12, n is 3 and pos is 4
         7 6 5 4 3 2 1 0
12 -> 0 0 0 0 1 1 0 0 
The program should print 3 (0 1 1).

Sample Execution-
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
Result = 3

Date-07-09-2024.
*/

#include <stdio.h>

int get_nbits_from_pos(int num, int n, int pos)
{
    //return  (num & ( ( (1 << n) - 1)  << (pos - n + 1))) >> (pos - n + 1); 
    int position=(pos-n+1);
    int mask=((1<<n)-1)<<position;
    int result=(num&mask)>>position;
    return result;
    
}


int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}

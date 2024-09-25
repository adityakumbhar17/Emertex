/*
Name- Aditya shivaji kumbhar
Description:

Read number num from user.
Read number val from user.
Read number a from user.
Read number b from user(a <= b <=31)
Do error checking
Check b is within limit or not.
Call replace_nbits_from_pos function by passing val, b - a + 1, b and n as arguments.
replace_nbits_from_pos(num, a, b, val);
Print the new value of i.
Prompt for continue option.
Sample Execution-

Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Result : 158
Date-
09-10-2024
*/


#include <stdio.h>

int replace_nbits_from_pos(int num, int a, int b, int val)
{
    val = (val & ~(((1 << (b - a + 1)) - 1) << a)) | ((num << a) & (((1 << (b - a + 1)) - 1) << a));
    return val;
    
}

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
   
   if (b < 0 || b > 31) {
        printf("Error: b is out of range\n");
        return 1;
    }
    if (a > b) {
        printf("Error: a is greater than b\n");
        return 1;
    }
    res = replace_nbits_from_pos(num, a, b, val);
    printf("Result: %d\n", res);
    
   
}

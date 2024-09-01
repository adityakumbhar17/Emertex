/*
Description:
Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on.
*/
/*
Name- Aditya shivaji kumbhar
Description-WAP to find which day of the year
Date-01-09-2024
Sample execution:-
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
*/


#include<stdio.h>
int main()
{
    int nth_day, first_day;
    //printf("Enter the value of 'n' : ");
    scanf("%d",&nth_day);
    if(nth_day< 1  ||  nth_day>365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
        return 1;
    }
    else
    {
   // printf("Choose First Day : \n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day : ");
    scanf("%d",&first_day);
    if(first_day< 1 || first_day>7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7");
        return 1;
    }
    else
      {
    int  acctuall_day =(first_day + (nth_day-1) )%7;
    if(acctuall_day==0)
    {
        acctuall_day=7;
    }
    
    switch(acctuall_day)
    {
       case 1:
       printf("The day is Sunday");
       break;
       
       case 2:
       printf("The day is Monday");
       break;
       
       case 3:
       printf("The day is Tuesday");
       break;
       
       case 4:
       printf("The day is Wednesday");
       break;
       
       case 5:
       printf("The day is Thursday");
       break;
       
       case 6:
       printf("The day is Friday");
       break;
       
       case 7:
       printf("The day is Saturday");
       break;
       
       default:
       printf("Error: Invalid input, first day should be > 0 and <= 7");
    
   }
  }
    }
}

//Define a macro TEMP, then #undef it, and try to use it.
#include<stdio.h>
#define TEMP 20
#undef TEMP
int main()
{
    #ifdef TEMP
        printf("the temp define");
        
    #else
        printf("The temp is not defined :");
    #endif
}

// Define a macro MODE with values 1 or 2. Print different outputs based on MODE.
#include<stdio.h>
#define MODE 1
int main()
{
    #if(MODE==1)
    {
        printf("MODE 1 is Enable ...");
    }
    #elif(MODE==2)
    {
        printf("Mode 2 is Enabled...");
        
    }
    #else
    {
        printf("NO MODE...");
    }
    #endif
}

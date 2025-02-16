//Define USE_INT to choose between int and float for a variable type
#include<stdio.h>
#include<string.h>
#define UNI_INT 
int main()
{
   #ifdef UNI_INT
        int num=10;
   #else
        float num=10.15;
    #endif
    
    printf("%f",(float)num);
}

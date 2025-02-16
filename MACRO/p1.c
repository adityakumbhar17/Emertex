#include <stdio.h>

#define DEBUG  // Uncomment this line to enable debug mode

int main() {
#ifdef DEBUG
    printf("Debug mode enabled\n");
#endif
    printf("Program running...\n");
    return 0;
}

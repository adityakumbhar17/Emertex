//finde the average of the each element of coulmns
#include <stdio.h>

int main() 
{
    int r, c;
    printf("Enter number of rows and columns: ");
    //r=>rows,c=>coulmns
    scanf("%d %d", &r, &c);
    int arr[r][c];
    //take the elements of the array from the user...
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    // Calculate and print the average of each column
    for (int i = 0; i < c; i++) 
    {
        int sum = 0;
        for (int j = 0; j < r; j++) 
        {
            sum =sum + arr[j][i];
        }
        float avg = (float)sum / r;
        printf("Average of column %d: %.2f\n", i + 1, avg);
    }

    return 0;
}

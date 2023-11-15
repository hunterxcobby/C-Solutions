#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    // Read the size of the array
    int n;
    scanf("%d", &n);

    // Allocate memory for the dynamic array
    int *arr = malloc(n * sizeof(int));

    // Read array elements from stdin
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);

    // Free the allocated memory
    free(arr);
    
    return 0;
}

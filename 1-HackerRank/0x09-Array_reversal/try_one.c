#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, *arr, i;
    int *tmp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    tmp = malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i = 1; i <= num; i++)
    {
        tmp[i] = arr[num - i];
        printf("temp of i is %d\n", tmp[i]);
    }


    for(i = 1; i <= num; i++)
        printf("%d ", *(tmp + i));
    printf("\n");

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    printf("\n");
    return 0;
}
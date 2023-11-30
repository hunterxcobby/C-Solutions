#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *tmp;
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    tmp = malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }


   for(i = 0; i < num / 2; i++) 
   {
        int tmp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = tmp;
    }


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    printf("\n");
    return 0;
}
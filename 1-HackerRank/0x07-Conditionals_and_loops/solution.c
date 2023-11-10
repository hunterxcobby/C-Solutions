#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(int n);

int main(void) 
{
    int a, b, i;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) 
    {
        if (i >= 1 && i <= 9) 
        {
            /* Print English representation in lowercase for 1 to 9*/
            char *numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("%s\n", numbers[i - 1]); 
        }
        else if (i % 2 == 0) 
        {
            /* Print "even" for even numbers*/
            printf("even\n");
        }
       	else 
        {
            /* Print "odd" for odd numbers*/
            printf("odd\n");
        }
    }

    return (0);
}


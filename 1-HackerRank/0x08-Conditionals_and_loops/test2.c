#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int n = 1234;
    int digit, result;
    /*scanf("%d", &n);*/
    /* Start a loop that continues until the number becomes 0*/
    while (n > 0) 
    {
        /* Extract the last digit of the number*/
        digit = n % 10;
         /* Add the extracted digit to the result*/
        result += digit;
        /* Remove the last digit from the number*/
        printf("This is the digit before =>%d\n", n);
        n /= 10;
        printf("This is the digit after =>%d\n", n);

    }

    printf("The result is => %d\n", result);
    return 0;
}
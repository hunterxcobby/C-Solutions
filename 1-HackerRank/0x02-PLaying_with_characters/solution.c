#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char ch;        /* Declare a variable 'ch' to store a single character */
    char s[100];    /* Declare an array 's' to store a string of up to 100 characters */
    char sen[100];  /* Declare an array 'sen' to store a sentence of up to 100 characters */
    
    scanf("%c", &ch);   /* Read a single character from standard input and store it in 'ch'*/
    printf("%c", ch);   /* Print the character stored in 'ch'*/

    scanf("%s", s);     /* Read a string (up to the first space) and store it in 's'*/
    printf("\n");       /* Print a newline character for formatting*/
    printf("%s", s);    /* Print the string stored in 's'*/

    scanf("\n");        /* Consume the newline character left in the input buffer*/
    printf("\n");       /* Print another newline character for formatting*/

    scanf("%[^\n]%*c", sen);  /* Read a full line (including spaces) and store it in 'sen'*/
                             /* The newline character is discarded using %*c*/
    printf("%s", sen);   /* Print the sentence stored in 'sen'*/

    return 0;   /* Indicate successful execution*/
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    /* Write your logic to print the tokens of the sentence here.*/
    char *delim = " ";
    char *token;

    /* Use strtok correctly to get all tokens*/
    token = strtok(s, delim);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

    free(s);  /* Free allocated memory*/

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
   
    int a, b, c, d, e, result;
    int n = 10567;


    printf("this is n {%d}\n", n);
    a = n % 10; /* this will be 4*/
    printf("this is a {%d}\n", a);
    b = a % 10; /* this will be 6*/
    printf("this is b {%d}\n", b);
    c = b % 10; /* this will be 5*/
    printf("this is c {%d}\n", c);
    d = c % 10; /* this will be 0*/
    printf("this is d {%d}\n", d);
    e = d % 10; /* this will be 1*/
    printf("this is e {%d}\n", e);

    
    // result = a + b + c + d + e;
    // printf("%d\n", result);
    return 0;
}
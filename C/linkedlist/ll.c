#include <stdio.h>
/**
 * Console Input - scanf -> any number of arguments  ("format specifier", ...)
 * Console output - printf -> any number of arguments ("format specifier", ...)
 */

/**
 * Memory -> (input value -> memory(variables))
 *        -> (output memory -> value(variables))
*/

/**
 * Variable of type 'int' -> 4 bytes 
 * if we get input from user then the value we get must be 4 bytes but how do we know
 * where to store it? We don't know, so we have to provide scanf with the address of the variable.
 * 
 * if we have to show some value to the user, then we already have the variable so we can directly show the value
 */
int main() {
    int a;
    char b;
    char c[50];
    double d;
    float e;

    printf("Size of int : %d bytes\n", sizeof(a));
    printf("Size of char : %d bytes\n", sizeof(b));
    printf("Size of string : %d bytes\n", sizeof(c));
    printf("Size of double : %d bytes\n", sizeof(d));
    printf("Size of float : %d bytes\n", sizeof(e));

    // 1 byte has 8 bits
    /**
    Size of int : 4 bytes
    Size of char : 1 bytes
    Size of string : 50 bytes
    Size of double : 8 bytes
    Size of float : 4 bytes
    */
    return 0;
}
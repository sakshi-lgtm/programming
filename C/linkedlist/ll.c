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

    printf("Value of number : %d\n", a);
    return 0;
}
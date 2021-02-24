#include <stdio.h>
/**
 * Console Input - scanf -> any number of arguments  ("format specifier", ...)
 * Console output - printf -> any number of arguments ("format specifier", ...)
 */
int *address_of_a_in_sum = NULL;
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

void sum() {
    int a = 5;
    
    printf("Sum Block: %d %d\n", a, &a);
    address_of_a_in_sum = &a;
}

void sum2() {
    double reclaim_memory = 786.090;
    
    printf("Sum2 Block: %lf %d\n", reclaim_memory, &reclaim_memory);
}
int main() {
    int a = 10;

    printf("Function Block: %d %d\n", a, &a);

    //Block A
    {
        int a = 20;

        {
            printf("A inner block: %d %d\n", a, &a);
        }

        printf("A block: %d %d\n", a, &a);
    }

    printf("Outer Function block: %d %d\n", a, &a);

    sum();
    sum2();
    printf("After sum ends: %d %d\n", *address_of_a_in_sum, address_of_a_in_sum);

    return 0;
}
#include <stdio.h>


// About structures
int main() {
    //Memory allocation in stack
    int array[5] = {1, 2, 3, 4, 5};

    //Address of array
    printf("%u\n", array);


    //Address of elements in array
    printf("%u\n", &array[0]);
    printf("%u\n", &array[1]);
    printf("%u\n", &array[2]);
    printf("%u\n", &array[3]);
    printf("%u\n", &array[4]);

    //Because it is on stack, we don't have control over the memory
    //And it managed by the OS or the platform where the program is being executed

    //We can see that the memory is contiguous, meaning that elements are placed in memory
    //one after the other

    //Array can be interpreted as a pointer
    // a[i] = *(a + i) => dereference an address with i as offset

    // The most fundamental difference between a array and a linked list is that
    // in linked list the elements are not contiguosly placed in memory, but are logically sequenced.

    // How do we achieve this?

    // We store the address of the next element in the previous elements.
    // By doing this we can create a logically sequenced chain of elements that is similar to an array but
    // different in the way elements are stored in memory.

    // But the problem with this is that at the time of creation of an element we must also store its address in the previous element
    // which mean we should have access to the previous element.

    // Linked list is basically a derived data structure and can be customized to create list of any form of data.
    // It is however a homogenous data structure meaning that all elements will be of the same type.

    // We define a structure in C as below.
    // It can have any combination of primitive data types. (Depends on you need)
    // Note: 'struct' is the 'keyword' here, but 'custom_type' can
    // be anything is just the name of the structure
    struct custom_type {
        int i;
        double d;
        char c;
    };

    // We declare a custom_type as below.
    struct custom_type x = { 1, 2.0, 'p' }; //shorthand

    //longhand
    /*
    struct custom_type x;
    x.i = 10;
    x.d = 2.0;
    x.c = 'p';

    */

    // We print custom_type as below
    printf("%d, %lf, %c\n", x.i, x.d, x.c);

    // Because we initialized the structure it must have some memory
    // We can use the & operator on the strucure to access its memory location
    void *ptr = &x;

    printf("Address of x : %u\n", ptr);
    printf("Address of x.i : %u\n", &x.i);
    printf("Address of x.d : %u\n", &x.d);
    printf("Address of x.c : %u\n", &x.c);

    //Value can be printed as such
    printf("Value of x.i : %d\n", x.i);
    printf("Value of x.d : %lf\n", x.d);
    printf("Value of x.c : %c\n", x.c);

    // To dereference a address associated with primitive type we use '*';
    // Because a derived data structure can have multiple types of values so a single star will not work
    // meaning you need way to access i, d, c from pointer in the example above.

    //One way could have been *(ptr + offset of element in bytes) but this would have looked confusing so a better syntax
    //for the same was chose as ptr->element
    // We can do the same for x as below.

    struct custom_type * pointer = &x;
    printf("Address of pointer : %u\n", pointer);
    printf("Address of pointer->i : %u\n", &pointer->i);
    printf("Address of pointer->d : %u\n", &pointer->d);
    printf("Address of pointer->c : %u\n", &pointer->c);

    // Value can be printed as follows
    printf("Value of pointer->i : %d\n", pointer->i);
    printf("Value of pointer->d : %lf\n", pointer->d);
    printf("Value of pointer->c : %c\n", pointer->c);










    return 0;
}
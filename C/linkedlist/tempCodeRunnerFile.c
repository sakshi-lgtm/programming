#include<stdio.h>

// Assumes little endian
void printBits(size_t const size, void const * const ptr)
{
    printf("Bits at %d: ", ptr);
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    printf("\n");
}

int main() {
    printf("\n\n\n");
    int a = 65;

    printf("Value of a is %d, Address of a is %d\n", a, &a);

    void * ptr = &a;
    printf("Value of ptr is %d, Address of ptr is %d\n", ptr, &ptr);
    printf("Size of void ptr is %d\n", sizeof(ptr));
    printf("Value at ptr is: Cannot dereference. Will throw error when we do *ptr");

    int * ptr2 = &a;
    printf("Value of ptr2 is %d, Address of ptr2 is %d\n", ptr2, &ptr2);
    printf("Size of int ptr2 is %d\n", sizeof(ptr2));
    printf("Value at ptr2 is: %d\n", *ptr2);

    double *ptr3 = &a;
    printf("Value of ptr3 is %d, Address of ptr3 is %d\n", ptr3, &ptr3);
    printf("Size of double ptr3 is %d\n", sizeof(ptr3));
    printf("Value at ptr3 is: %lf\n", *ptr3);

    char *ptr4 = &a;
    printf("Value of ptr4 is %d, Address of ptr4 is %d\n", ptr4, &ptr4);
    printf("Size of char ptr4 is %d\n", sizeof(ptr4));
    printf("Value at ptr4 is: %c\n", *ptr4);


    // Dereference the pointers
    printBits(1, ptr);
    printBits(1, ptr+1);
    printBits(1, ptr+2);
    printBits(1, ptr+3);
    printBits(1, ptr+4);
    printBits(1, ptr+5);
    printBits(1, ptr+6);
    printBits(1, ptr+7);

    return 0;
}
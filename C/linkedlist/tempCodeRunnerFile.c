#include<stdio.h>
#include<stdlib.h>

int main() {
    // int a = 10;
    // double *ptr = &a;

    // printf("Address stored in PTR : %u\n", ptr);
    // printf("Address stored in PTR : %u\n", ptr+1);
    // printf("Address stored in PTR : %u\n", ptr+2);


    int array[3] = {1, 3, 6};

    int *ptr2 = &array;

    printf("Address of array: %u\n", &array);
    printf("Address of array + 1: %u\n", &array + 1);
    printf("Address of array[0]: %u\n", &array[0]);
    printf("Address of array[0] + 1: %u\n", &array[0] + 1);

    printf("Value at location 2 in array: %d\n", array[1]);

    printf("Value at location 2 in array: %d\n", *(&array[0] + 1));
    printf("Value at location 2 in array: %d\n", *(array + 1));
    printf("Value at location 2 in array: %d\n", *(ptr2 + 1));

    printf("Value at location 2 in array: %d\n", ptr2[1]);


    int array2[2000000];
    array2[1999999] = 10;

    printf("Array2 at 1999999: %d\n", array2[1999999]);

    // meaning a[1] => *(&a[0] + 1)


    // void *address = malloc(sizeof(int) * 10000000);
    // printf("Address of memory allocated on heap: %u\n", address);

    // int *ptrh = (int *)address;
    // ptrh[9999999] = 10;
    // printf("Heap Array at 9999999: %d\n", ptrh[9999999]);

    while (1) {
        int a = 10;
        void *address = malloc(sizeof(a) * 10000000);
        //printf("Address of memory allocated on heap: %u\n", address);

        int *ptrh = (int *)address;
        ptrh[9999999] = 10;


        free(address);
    }





    return 0;
}
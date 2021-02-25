#include<stdio.h>

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

    return 0;
}
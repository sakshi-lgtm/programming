#include <stdio.h>

int main()
{
    //Memory allocate
    int a[5] = {1, 3, 5, 6, 8}, i, n = 5;
    printf(" elements in the array\n");
    printf("%d\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}


/*
Declatration -> Compiler memory allocate
Initialization -> Put data into memory location for variable
*/ declaration
taking input
loop as 5 elemets are taken
to print the elements of the array
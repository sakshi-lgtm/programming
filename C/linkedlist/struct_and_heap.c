#include <stdio.h>


struct bittu {
    int num;
    char name[12];
};


int main()
{
    struct bittu var1;

    struct bittu *ptr = NULL;

    var1.num = 10;
    var1.name[0] = 'b';
    var1.name[1] = 'i';
    var1.name[2] = 't';
    var1.name[3] = 't';
    var1.name[4] = 'u';
    var1.name[4] = '\0';

    ptr = &var1;

    int a =10;
    int * ptr2 =&a;
    printf("%d\n", ptr2);

    printf("%d, %s\n", var1.num, var1.name);
    
    int a2 = 10;
    int *ptr4 = &a2;
    int b = *ptr4;
    *ptr4 = 15;

    printf("Value of a : %d\n", a2);

    printf("Size of bittu %d\n", sizeof(var1));
    return 0;
}
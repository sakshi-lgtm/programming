#include<stdio.h>

void function(int* n) {
    *n = 45;
    printf("in function: %d, %d\n", n, &n);
}

int main(){
    int n = 45;
    //printf("in main : %d, %d\n", n, &n);
    //function(&n);
    //printf("in main again : %d, %d\n", n, &n);



    //printf ("Enter%d a numb%cer ", 10, n);

    //printf("Value of ptr %d ", *(&n));

    //scanf("%d", &n);


    //printf("%d00xuy00%d%d%d%d", n, 1, 2, 3, 4);

    int a, b, c;
    //scanf("%d%d%d", &a, &b, &c);

    //printf("%d %d %d", a, b, c);


    char str[50];

    //scanf("%s", &str);
    gets(str);

    puts(str);
   //printf("%s", str);
    return 0;
}
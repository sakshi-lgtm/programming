#include<stdio.h>

struct mytype {
    int num;
    char *str;
    double d;
};

void somefunction(struct mytype* s) {
    s->d = 10;
    printf("2.) %d, %s, %lf\n", s->num, s->str, s->d);
}

int main() {
    struct mytype x;

    x.num = 10;
    x.str = "hello";
    x.d = 20.09;

    printf("1.) %d, %s, %lf\n", x.num, x.str, x.d);
    somefunction(&x);
    printf("3.)%d, %s, %lf\n", x.num, x.str, x.d);



    return 0;
}
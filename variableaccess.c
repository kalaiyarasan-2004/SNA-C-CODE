#include<stdio.h>
#include <unistd.h>
int foo();
int a = 10; //global variables

int main() {
    int v = 34;
    int c = 35;
    int d = 36;
    int f = 37;
    static int h = 34;
    float x = foo();
    float y = foo() + 34;
    printf("[main] Value of x is: %f\n", x);
    printf("This process is running with PID: %d\n", getpid());
    printf("[main] Value of a is: %d\n", a);
    printf("[main:beforeif] Value of h is: %d\n", h);
    printf("[main:beforeif] Value of v is: %d\n", v);

    printf("[main] Address of v is: %p\n", &v); //%p - pointers
    printf("[main] Address of c is: %p\n", &c); //%p - pointers
    printf("[main] Address of d is: %p\n", &d); //%p - pointers
    printf("[main] Address of f is: %p\n", &f); //%p - pointers
    printf("[main] Address of x is: %p\n", &x); //%p - pointers
    printf("[main] Address of y is: %p\n", &y); //%p - pointers

    printf("[main] Address of a is: %p\n", &a); //%p - pointers
    printf("[main] Address of h is: %p\n", &h); //%p - pointers

    if (1) {
        //int v = 20;
        int a = 29;
        static int j = 34;
        printf("[main:if] Value of v is: %d\n", v);
        printf("[main:if] Value of a is: %d\n", a);
        printf("[main:if] Address of a is: %p\n", &a); //%p - pointers
        printf("[main:if] Address of j is: %p\n", &j); //%p - pointers

        int *m = &j + 0x1; //illegal access, refers static var @ foo
        printf("[main:if] Address of m is: %p\n", m); //%p - pointers
        *m = 40;
    }

    x = foo();
    printf("[main] Value of x is: %f\n", x);

    printf("[main:afterif] Value of h is: %d\n", h);
    printf("[main:afterif] Value of v is: %d\n", v);
    printf("[main:afterif] Value of a is: %d\n", a);

    return x;
}

//user defined function
int foo(){
    static int k = 30;
    int v = 20; //function scope variable
    v = k * 30; //some operation
    printf("[foo] Value of a is: %d\n", a);
    printf("[foo] Address of k is: %p\n", &k); //%p - pointers
    a = 678;
    return v;
}
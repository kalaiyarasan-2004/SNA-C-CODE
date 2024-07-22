#include<stdio.h>
int main(){
    int v=10;
    int *j = &v; //a pointer is a varibale that holds a data which is an address of another variable

    printf("[*] Value of v: %d\n", v); 
    printf("[*] Address of v: %p\n", &v); //address of the referred variable
    printf("[*] Value of j: %p\n", j); //address of the referred variable
    printf("[*] Value of *j: %d\n", *j); //value of the referred variable
    printf("[*] Address of j: %p\n", &j); //address of the pointer variable

    v = 20;

    printf("[*] Value of v: %d\n", v);
    printf("[*] Address of v: %p\n", &v);
    printf("[*] Value of j: %p\n", j);
    printf("[*] Value of *j: %d\n", *j);
    printf("[*] Address of j: %p\n", &j);

    *j = *j + 20;

    printf("[*] Value of v: %d\n", v);
    printf("[*] Address of v: %p\n", &v);
    printf("[*] Value of j: %p\n", j);
    printf("[*] Value of *j: %d\n", *j);
    printf("[*] Address of j: %p\n", &j);
}

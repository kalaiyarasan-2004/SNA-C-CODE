#include<stdio.h>

int main() {
    int i=0;
    for(i=0; i<10; i++){
        printf("Hello world\b\b\b You entered: %d", i);
        printf("\n");
        printf("Sizeof: %ld", sizeof(i));
    }
}
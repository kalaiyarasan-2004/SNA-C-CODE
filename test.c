#include <stdio.h>
int i; //global variable
int foo(){
    int j = 10;
    static int i; //will happen only once even if block gets lifecycle.
    // all
    i = i + j; //i++
    return i;
}
int main(){
    for(int i=0; i<10; i++){
        printf("foo(): %d\n", foo());
    }
}
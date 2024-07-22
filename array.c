#include<stdio.h>
#include<stdlib.h>
int main() {
    int i[10]; //declaration
    //int k = &
    // index     0 1 2 3 4 5 6 7 8 9
    //datatype varname[size + 1];
    // 10 = size + 1
    // size = 10 - 1
    // size = 9

    //array init
    for(int k=0; k<10; k++){
        i[k] = 20*k; //assigning values to array!
    }
    
    printf("Addr of i[0]: %p\n", &i[0]);
    printf("Addr of i: %p\n", i);

    for(int j=0; j<10; j++){
        printf("Direct: i[%d] = %d\n",j, i[j]);
        printf("Address of i[%d] : %p\n",j, &i[j]);
        printf("Via Address: i[%d] = %d (%p)\n",j, *(i + j), (i + j));
    }
}
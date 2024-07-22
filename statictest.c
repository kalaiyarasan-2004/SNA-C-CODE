#include<stdio.h>
#include<string.h>
int foo(){
    printf("foo(): called\n");
    int i;
    //char string[10] = {'h', 'e', 'l', 'l', 'o'};
    char string[10];
    printf("Do you want to change value of i? [yes]");
    scanf("%s", string);
    if(strcmp(string, "yes") == 0) {
        printf("Enter value for i: ");
        scanf("%d", &i);
    }
    printf("foo(): exiting\n");
    return i;
}
int main(){
    for(int i=0; i<10; i++){
        printf("foo(): %d\n", foo());
    }
}
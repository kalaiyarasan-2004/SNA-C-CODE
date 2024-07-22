#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char pass[128];
    char t1[10];
    char t2[10];
    char t3[10];
    printf("Enter a password: ");
    scanf("%[^\n]s", pass);
    printf("Enter t1: ");
    scanf("%s", t1);
    printf("Enter t2: ");
    scanf("%s", t2);
    printf("Enter t3: ");
    scanf("%s", t3);

    printf("Password: %s\n", pass);
    printf("t1: %s\n", t1);
    printf("t2: %s\n", t2);
    printf("t3: %s\n", t3);

    system("ls > /dev/stderr");
}
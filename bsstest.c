#include<stdio.h>
int global;
void function(){
    int x = 10; // local variable
    int static y; // static variable

    x+=10;
    y+=10;
    printf("Local Variable X is: %d, Static Varaiable Y is: %d \n", x, y); // printing.
    printf("-------------------------------------------------------------------------- \n");
    printf("Address of Local Variable: %p \n", &x);
    printf("Address of Static Variable: %p \n", &y);
    printf("Address of Static Variable: %p \n", &y);

}


int main(){
    function(); 
    function(); 
    function(); 
    function(); 
}
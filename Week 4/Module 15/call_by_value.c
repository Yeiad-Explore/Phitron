#include <stdio.h>

void fun(int x){

    printf("Fun x er address %p\n",&x);
    printf("fun x er value %d\n",x);

}


int main() {
    // Your code goes here
    int x = 10;
    printf("main x er address %p\n",&x);
    printf("main x er value %d\n",x);
    printf("------------------------------\n");
    fun(x);
    return 0;
}
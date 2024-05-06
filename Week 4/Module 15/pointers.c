#include <stdio.h>

int main() {
    // Your code goes here
    int a=100;
    int *p=&a;
    printf("a er adress = %p\n",&a);
    printf("a er Value = %d\n",a);
    printf("p er adress = %p\n",&p);
    printf("p er Value = %p\n",p);
    return 0;
}
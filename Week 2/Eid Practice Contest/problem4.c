#include <stdio.h>

int main() {
    // Your code goes here
    int x;
    int f= 0;
    scanf("%d", &x);
    int i = 1;
    while(f<=80){
        f=(i*4)+ i;
        i++;
    }
    printf("%d",f);
    return 0;
}